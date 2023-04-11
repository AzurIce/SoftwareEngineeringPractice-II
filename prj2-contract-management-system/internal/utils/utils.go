package utils

import (
	"reflect"
	"regexp"
	"strings"
)

var matchFirstCap = regexp.MustCompile("(.)([A-Z][a-z]+)")
var matchAllCap   = regexp.MustCompile("([a-z0-9])([A-Z])")

func ToSnakeCase(str string) string {
    snake := matchFirstCap.ReplaceAllString(str, "${1}_${2}")
    snake  = matchAllCap.ReplaceAllString(snake, "${1}_${2}")
    return strings.ToLower(snake)
}

// Database Reflect

// value has to be a struct or the pointer of a struct 
func GetModelValue(value interface{}) reflect.Value {
    reflectValue := reflect.ValueOf(value)

    if reflectValue.Kind() == reflect.Ptr {
        reflectValue = reflect.Indirect(reflectValue)
    }
    // if reflectValue.Type().Kind() != reflect.Struct {
    //     return nil, errors.New("invalid arg")
    // }

    return reflectValue
}

func GetModelType(value interface{}) reflect.Type {
    return GetModelValue(value).Type()
}

func GetTableName(t reflect.Type) string {
    return ToSnakeCase(t.Name()) + "s"
}
