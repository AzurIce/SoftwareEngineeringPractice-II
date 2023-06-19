package utils

import (
    "fmt"
    "testing"
	// "prj2/internal/models"
)

func TestToSnakeCase(t *testing.T) {
    toSnakeCase := func(str string) string {
        snakeCase := ToSnakeCase(str)
        fmt.Printf("SnakeCase of \"%v\" is \"%v\"\n", str, snakeCase)
        return snakeCase
    }

    if toSnakeCase("ID") != "id" {
        t.Fail()
    }
}

// func TestGetTableName(t *testing.T) {
//     modelType, err := GetModelType(&models.User{})
//     if err != nil {
//         t.Error(err)
//     }
//     tablename := GetTableName(modelType)
//     fmt.Println(tablename)
// }