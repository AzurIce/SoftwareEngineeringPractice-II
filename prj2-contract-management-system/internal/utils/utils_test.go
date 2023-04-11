package utils

import (
    "fmt"
    "testing"
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
