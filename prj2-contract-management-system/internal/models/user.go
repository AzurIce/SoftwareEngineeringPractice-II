package models

type User struct {
    ID        int    `orm:"PRIMARY KEY GENERATED ALWAYS AS IDENTITY"`
    Username  string `orm:"NOT NULL CHECK (username <> '')"`
    Nickname  string `orm:"NOT NULL CHECK (nickname <> '')"`
    Password  string `orm:"NOT NULL CHECK (CHAR_LENGTH(password) BETWEEN 6 AND 20)"`
    Usergroup int    `orm:"CHECK (usergroup BETWEEN 0 AND 3)"`
}
