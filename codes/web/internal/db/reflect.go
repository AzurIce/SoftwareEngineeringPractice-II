package db

import (
    "reflect"
    "web/internal/utils"
)

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
    return utils.ToSnakeCase(t.Name()) + "s"
}
