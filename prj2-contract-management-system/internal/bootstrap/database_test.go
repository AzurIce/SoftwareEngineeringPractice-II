package bootstrap

import (
	// "fmt"
	"log"
	"reflect"
	"testing"
    "prj2/internal/models"
)

func TestInitTables(t *testing.T) {
	initTables()
	// _, err := DB.Exec("CREATE TABLE test (name varchar(8) PRIMARY KEY);")
	// if err != nil {
	// 	fmt.Println(err.Error())
	// }
}

func TestReflect(t *testing.T) {
    var test = func(value interface{}) {
        var tableName string
        if kind := reflect.ValueOf(value).Kind(); kind == reflect.String {
            tableName = reflect.ValueOf(value).String()
        } else if kind == reflect.Ptr{
            tt := reflect.Indirect(reflect.ValueOf(value)).Type()
            tableName = tt.Name()
        }
        log.Println(tableName)
    }

    test("string_value")
    test(&models.User{})
}
