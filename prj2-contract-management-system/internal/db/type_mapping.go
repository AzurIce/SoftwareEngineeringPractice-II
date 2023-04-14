package db

import (
    "reflect"
    "time"
)

func GetSQLType(field reflect.StructField) string {
    var sqlType string
    if sqlType = field.Tag.Get("sqlType"); len(sqlType) == 0 {
        switch field.Type.Kind() {
        case reflect.Bool:
            sqlType = "bool"
        case reflect.Int8, reflect.Uint8, reflect.Int16, reflect.Uint16:
            sqlType = "smallint"
        case reflect.Int32, reflect.Uint32:
            sqlType = "integer"
        case reflect.Int, reflect.Int64, reflect.Uint, reflect.Uint64:
            sqlType = "bigint"
        case reflect.Float32:
            sqlType = "real"
        case reflect.Float64:
            sqlType = "double precision"
        case reflect.String:
            sqlType = "text"
        default:
            if field.Type == reflect.TypeOf(time.Time{}) {
                sqlType = "timestampz"
            }
            // TODO
        }
    } else {
        if sqlType == "serial" {
            switch field.Type.Kind() {
            case reflect.Int8, reflect.Uint8, reflect.Int16, reflect.Uint16:
                sqlType = "smallserial"
            case reflect.Int32, reflect.Uint32:
                sqlType = "serial"
            case reflect.Int, reflect.Int64, reflect.Uint, reflect.Uint64:
                sqlType = "bigserial"
            }
        }
    }
    return sqlType
}
