package db

import (
    "database/sql"
    "fmt"
    "log"
    "time"
    "reflect"
    "strings"
    "errors"

    "prj2/internal/utils"

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

func (db *DBHelper) currentDatabase() (name string) {
	db.DB.QueryRow("SELECT DATABASE()").Scan(&name)
	return
}

func (db *DBHelper) HasTable(value interface{}) {
    var tableName string
    reflectValue := reflect.ValueOf(value)
    // reflectType := reflect.TypeOf(value)
    if kind := reflectValue.Kind(); kind == reflect.String {
        tableName = reflectValue.String()
    } else if kind == reflect.Ptr{
        tableName = reflect.Indirect(reflectValue).Type().Name()
    }
    log.Println(tableName)

    var res int
    db.DB.QueryRow("SELECT count(*) FROM information_schema.tables WHERE table_schema = ? AND table_name = ? AND table_type = ?", db.currentDatabase(), tableName, "BASE TABLE").Scan(&res)
    

}

func (db *DBHelper) CreateTable(values ...any) error {
    for _, value := range values {
        reflectValue := reflect.ValueOf(value)
        // reflectType := reflect.TypeOf(value)

        if reflectValue.Kind() != reflect.Ptr || reflect.Indirect(reflectValue).Type().Kind() != reflect.Struct {
            return errors.New("invalid arg")
        }
        modelType := reflect.Indirect(reflectValue).Type()

        tableName := modelType.Name()
        tableName = utils.ToSnakeCase(tableName) + "s"
        // fmt.Println(modelType.Name())
        // fmt.Println(modelType.NumField())
        defs := [] string{}

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

        stmt := fmt.Sprintf("CREATE TABLE IF NOT EXISTS %s (%s)", tableName, strings.Join(defs, ",\n"))
        log.Printf("Executing: %v", stmt)

        _, err := db.DB.Exec(stmt)
        if err != nil {
            return err
        }

    }
    return nil
}

func (db *DBHelper) CreateTableIfNotExist(tableName string, columnDefs ...string) error {
	columnsDef := strings.Join(columnDefs, ",")
	log.Println(tableName)
	log.Println(columnsDef)
	_, err := db.DB.Exec(
		fmt.Sprintf("CREATE TABLE IF NOT EXISTS %s (%s)", tableName, columnsDef),
	)
	return err
}
