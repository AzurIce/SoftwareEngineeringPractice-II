package bootstrap

import (
    "log"
    "prj2/internal/db"
)

var DB *db.DBHelper

func init() {
    DB = db.MustOpenDB()
    initTables()
}

func initTables() {
    var err error
    err = DB.CreateTableIfNotExist("testt", "name varchar(8) PRIMARY KEY")
    if err != nil {
        log.Panicf("Failed to create test table: %v\n", err)
    }
}
