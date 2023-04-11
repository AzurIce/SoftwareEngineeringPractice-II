package models

type User struct {
    ID        int    `orm:"PRIMARY KEY GENERATED ALWAYS AS IDENTITY"`
    username  string `orm:"NOT NULL CHECK (username <> '')"`
    nickname  string `orm:"NOT NULL CHECK (nickname <> '')"`
    password  string `orm:"NOT NULL CHECK (CHAR_LENGTH(password) BETWEEN 6 AND 20)"`
    usergroup int    `orm:"CHECK (usergroup BETWEEN 0 AND 3)"`
}
