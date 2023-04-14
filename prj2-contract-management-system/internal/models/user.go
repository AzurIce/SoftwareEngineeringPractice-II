package models

import (
	// "prj2/internal/utils"
	// "reflect"
)

type User struct {
	ID        int    `sqlType:"serial" sql:"PRIMARY KEY"`
	Username  string `sql:"NOT NULL CHECK (username <> '')"`
	Nickname  string `sql:"NOT NULL CHECK (nickname <> '')"`
	Password  string `sql:"NOT NULL CHECK (CHAR_LENGTH(password) BETWEEN 6 AND 20)"`
	Usergroup int    `sql:"CHECK (usergroup BETWEEN 0 AND 3)"`
}

