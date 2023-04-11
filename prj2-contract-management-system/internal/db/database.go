package db

import (
	"database/sql"
	"fmt"
	"log"
	"prj2/internal/utils"
	"reflect"
	"strings"
	"time"

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
	modelType := utils.GetModelType(value)
	tableName := utils.GetTableName(modelType)

	var res int
	db.DB.QueryRow("SELECT count(*) FROM information_schema.tables WHERE table_name = ? AND table_type = ?", tableName, "BASE TABLE").Scan(&res)
	return res != 0
}

// CreateTable
// Create tables based on the type of each one value of values if not exist
func (db *DBHelper) CreateTable(values ...any) error {
	for _, value := range values {
		modelType := utils.GetModelType(value)
		tableName := utils.GetTableName(modelType)
		log.Printf("Creating table<%v>...\n", tableName)

		if db.HasTable(db) {
			log.Printf("Create failed, Table<%v> already exists.\n", tableName)
			continue
		}

		// fmt.Println(modelType.Name())
		// fmt.Println(modelType.NumField())
		defs := []string{}

		for i := 0; i < modelType.NumField(); i++ {
			field := modelType.Field(i)

			var colType string
			switch field.Type.Kind() {
			case reflect.Bool:
				colType = "bool"
			case reflect.Int8, reflect.Uint8, reflect.Int16, reflect.Uint16:
				colType = "smallint"
			case reflect.Int32, reflect.Uint32:
				colType = "integer"
			case reflect.Int, reflect.Int64, reflect.Uint, reflect.Uint64:
				colType = "bigint"
			case reflect.Float32:
				colType = "real"
			case reflect.Float64:
				colType = "double precision"
			case reflect.String:
				colType = "text"
			default:
				if field.Type == reflect.TypeOf(time.Time{}) {
					colType = "timestampz"
				}
				// TODO
			}
			def := fmt.Sprintf("%v %v %v", field.Name, colType, field.Tag.Get("orm"))
			defs = append(defs, def)

			// fmt.Printf("Field[%v]: %s %v\n", i, field.Name, field.Type)
			// fmt.Printf("ColType: %v\n", colType)

			// fmt.Printf("Tag: %v\n\n", field.Tag.Get("orm"))
		}

		stmt := fmt.Sprintf("CREATE TABLE %s (%s)", tableName, strings.Join(defs, ",\n"))
		log.Printf("Executing: %v", stmt)

		_, err := db.DB.Exec(stmt)
		if err != nil {
			return err
		}

	}
	return nil
}

// func (db *DBHelper) Exec(query string, args ...any) {
//     db.DB.Exec(query, args)
// }

// ------ ↓ Traditional ↓ ------

// func (db *DBHelper) CreateTableIfNotExist(tableName string, columnDefs ...string) error {
// 	columnsDef := strings.Join(columnDefs, ",")
// 	log.Println(tableName)
// 	log.Println(columnsDef)
// 	_, err := db.DB.Exec(
// 		fmt.Sprintf("CREATE TABLE IF NOT EXISTS %s (%s)", tableName, columnsDef),
// 	)
// 	return err
// }

// Insert inserts value to the corresponding table according to its type
// cols represents the columns should be used (empty for using all fields)
func (db *DBHelper) Insert(value interface{}, cols ...string) error {
	reflectValue := reflect.ValueOf(value)
	if reflectValue.Type().Kind() == reflect.Ptr {
		reflectValue = reflect.Indirect(reflectValue)
	}
	reflectType := reflectValue.Type()

	// If no cols provided, make it contains all fields

	ncols := []string{}
	valuesPlaceholder := []string{}
	values := []any{}
	for i := 0; i < reflectType.NumField(); i++ {
		flag := false
		for _, col := range cols {
			if utils.ToSnakeCase(reflectType.Field(i).Name) == utils.ToSnakeCase(col) {
				flag = true
				break
			}
		}
		if len(cols) == 0 || flag {
			field := reflectType.Field(i)
			fieldValue := reflectValue.Field(i)
			ncols = append(ncols, utils.ToSnakeCase(field.Name))
			valuesPlaceholder = append(valuesPlaceholder, fmt.Sprintf("$%v", len(ncols)))
            values = append(values, fieldValue.Interface())
		}
	}
	cols = ncols
	fmt.Println(cols, len(cols))
	fmt.Println(values, len(values))

	tableName := utils.GetTableName(reflectType)
	colsDefStr := strings.Join(cols, ", ")
	valuesPlaceholderStr := strings.Join(valuesPlaceholder, ", ")

    stmt := fmt.Sprintf("INSERT INTO %v (%v) VALUES (%v)", tableName, colsDefStr, valuesPlaceholderStr)
    fmt.Println(stmt)

	_, err := db.DB.Exec(
		stmt,
		values...,
	)

    // _, err := db.DB.Exec(
    //     "INSERT INTO users (username, nickname, password, usergroup) VALUES ($1, $2, $3, $4)",
    //     "asdddd", "asddddd", "asddddd", 0,
    // )

	// values :=
	return err
}