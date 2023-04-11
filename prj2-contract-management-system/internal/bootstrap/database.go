package bootstrap

import (
	"log"
	"prj2/internal/db"
	"prj2/internal/models"
)

var DB *db.DBHelper

func init() {
    DB = db.MustOpenDB()
    initTables()
}

func initTables() {
    err := DB.CreateTable(&models.User{})
    if err != nil {
        log.Panicf("Failed to create table: %v\n", err)
    }
}
