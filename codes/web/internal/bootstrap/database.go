package bootstrap

import (
	"log"
	"web/internal/db"
	"web/internal/models"
)

var DB *db.DBHelper

func init() {
    DB = db.MustOpenDB()
    initTables()
}

func initTables() {
    log.Println("Initializing tables...")
    err := DB.CreateTablesIfNotExist(&models.User{}, &models.Course{}, &models.UserCourse{})
    if err != nil {
        log.Panicf("Failed to create tables: %v\n", err)
    }
}
