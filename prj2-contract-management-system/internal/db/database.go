package db

import (
	"database/sql"
	"errors"
	"fmt"
	"log"
	"prj2/internal/utils"
	"reflect"
	"strings"

	_ "github.com/jackc/pgx/v5/stdlib"
)

type DBHelper struct {
	DB *sql.DB
}

func MustOpenDB() *DBHelper {
	db, err := sql.Open("pgx", "postgres://postgres:@116.204.89.3:5432/prj2")
	if err != nil {
		log.Panicf("Unable to connect to database: %v\n", err)
	}
	return &DBHelper{db}
}

func (db *DBHelper) CurrentDatabase() (name string) {
	db.DB.QueryRow("SELECT DATABASE()").Scan(&name)
	return
}

func (db *DBHelper) HasTable(value interface{}) bool {
	modelType := GetModelType(value)
	tableName := GetTableName(modelType)
	// log.Printf("[HasTable]: Checking table<%v>\n", tableName)

	var res int
	db.DB.QueryRow("SELECT count(*) FROM information_schema.tables WHERE table_name = $1 AND table_type = $2", tableName, "BASE TABLE").Scan(&res)
	// log.Printf("[HasTable]: result: %v\n", res)
	return res != 0
}

// ------ ↓ ORM ↓ ------

// Base on the type of the argument
// the type of `value` should be the pointer of a struct

// CreateTable creates tables based on the type of each one value of values if not exist
func (db *DBHelper) CreateTable(values ...any) error {
	for _, value := range values {
		modelType := GetModelType(value)
		tableName := GetTableName(modelType)
		log.Printf("Creating table<%v>...\n", tableName)

		if db.HasTable(db) {
			log.Printf("Create failed, Table<%v> already exists.\n", tableName)
			continue
		}

		// fmt.Println(modelType.Name())
		// fmt.Println(modelType.NumField())
		colDefs := []string{}

		for i := 0; i < modelType.NumField(); i++ {
			field := modelType.Field(i)

            colType := GetSQLType(field)
			colDef := fmt.Sprintf("%v %v %v", utils.ToSnakeCase(field.Name), colType, field.Tag.Get("sql"))
			colDefs = append(colDefs, colDef)
		}

		stmt := fmt.Sprintf("CREATE TABLE %s (%s)", tableName, strings.Join(colDefs, ",\n"))
		log.Printf("[CreateTable] Executing: %v\n", stmt)

		_, err := db.DB.Exec(stmt)
		if err != nil {
			return err
		}
	}
	return nil
}

// Insert inserts value to the corresponding table according to its type
// cols represents the columns should be used (empty for using all fields)
func (db *DBHelper) Insert(value interface{}, cols ...string) (sql.Result, error) {
    modelType := GetModelType(value)
    modelValue := GetModelValue(value)

	// If no cols provided, make it contains all fields
    if len(cols) == 0 {
        for i := 0; i < modelType.NumField(); i++ {
            field := modelType.Field(i)
            if field.Tag.Get("sqlType") == "serial" {
                continue
            }
            cols = append(cols, utils.ToSnakeCase(field.Name))
        }
    }
	valuesPlaceholder := []string{}
	values := []any{}
	for i := 0; i < modelType.NumField(); i++ {
        // check if the field is in cols
		flag := false
		for _, col := range cols {
			if utils.ToSnakeCase(modelType.Field(i).Name) == utils.ToSnakeCase(col) {
				flag = true
				break
			}
		}

		if flag {
			fieldValue := modelValue.Field(i)

			valuesPlaceholder = append(valuesPlaceholder, fmt.Sprintf("$%v", len(values) + 1))
            values = append(values, fieldValue.Interface())
		}
	}
    fmt.Printf("Insert cols: %v\n", cols)
    fmt.Printf("Insert values: %v\n", values)

	tableName := GetTableName(modelType)
	colDefs := strings.Join(cols, ", ")
	valueDefs := strings.Join(valuesPlaceholder, ", ")

    stmt := fmt.Sprintf("INSERT INTO %v (%v) VALUES (%v)", tableName, colDefs, valueDefs)
	log.Printf("[Insert] Executing: %v\n", stmt)

	res, err := db.DB.Exec(
		stmt,
		values...,
	)

	return res, err
}

// Query
// dest: the pointer to a struct
// conds:
//   if it only contains a integer: primary key
//   if it only contains a string: query str
//   if it contains many string:
//     conds[0]: query: query str
//     conds[1:]: args: query args
func (db *DBHelper) First(dest interface{}, conds ...interface{}) error {
	log.Println("[db/First]: ")
    destType := GetModelType(dest)
    destValue := GetModelValue(dest)

    fmt.Println(destValue, destType)

    // modelType := utils.GetModelType(dest)
    tableName := GetTableName(destType)

    destFields := []interface{}{}
    for i := 0; i < destType.NumField(); i++ {
        destFields = append(destFields, destValue.Field(i).Addr().Interface())
    }

    // No conditions
    if len(conds) == 0 {
        err :=  db.DB.QueryRow(
            fmt.Sprintf("SELECT * FROM %v", tableName),
        ).Scan(destFields...)
        if err != nil {
            return err
        }
    } else if len(conds) == 1 {
		switch reflect.TypeOf(conds[0]).Kind() {
		case reflect.Int, reflect.Int8, reflect.Int16, reflect.Int32, reflect.Int64:
			err :=  db.DB.QueryRow(
				fmt.Sprintf("SELECT * FROM %v WHERE id = $1", tableName), conds[0],
			).Scan(destFields...)
			if err == sql.ErrNoRows {
				return errors.New("no user")
			}
			if err != nil {
				return err
			}
		case reflect.String:
			err :=  db.DB.QueryRow(
				fmt.Sprintf("SELECT * FROM %v WHERE %v", tableName, conds[0]),
			).Scan(destFields...)
			if err == sql.ErrNoRows {
				return errors.New("no user")
			}
			if err != nil {
				return err
			}
		}
	} else {
		err :=  db.DB.QueryRow(
			fmt.Sprintf("SELECT * FROM %v WHERE %v", tableName, conds[0]), conds[1:]...,
		).Scan(destFields...)
		if err == sql.ErrNoRows {
			return errors.New("no user")
		}
		if err != nil {
			return err
		}
	}
	
    return nil
}

// func (db *DBHelper) Delete()
