package db

import (
	"errors"
	"fmt"
	"prj2/internal/models"
	"reflect"
	"strings"
	"testing"
	"time"
)

func TestCreateTable(t *testing.T) {
    db := MustOpenDB()

    err := db.CreateTable(&models.User{})
    if err != nil {
        t.Error(err)
    }
}

func TestReflect(t *testing.T) {
    f := func(value interface{}) error {
        reflectValue := reflect.ValueOf(value)
        // reflectType := reflect.TypeOf(value)

        if reflectValue.Kind() != reflect.Ptr || reflect.Indirect(reflectValue).Type().Kind() != reflect.Struct {
            return errors.New("invalid arg")
        }
        modelType := reflect.Indirect(reflectValue).Type()

        // fmt.Println(modelType.Name())
        // fmt.Println(modelType.NumField())
        defs := [] string{}

        for i := 0; i < modelType.NumField(); i++ {
            field := modelType.Field(i)

            colName := strings.ToLower(field.Name) // TODO: to snake_case
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
            def := fmt.Sprintf("%v %v %v", colName, colType, field.Tag.Get("orm"))
            defs = append(defs, def)

            fmt.Printf("Field[%v]: %s %v\n", i, field.Name, field.Type)
            fmt.Printf("ColType: %v\n", colType)

            fmt.Printf("Tag: %v\n\n", field.Tag.Get("orm"))
        }
        return nil
    }

    var err error
    err = f(&models.User{})
    if err != nil {
        t.Error(err)
    }

    i := 0
    err = f(&i)
    if err != nil {
        t.Error(err)
    }
}
