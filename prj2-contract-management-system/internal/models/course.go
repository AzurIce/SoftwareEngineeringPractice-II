package models

type Course struct {
    ID        int    `sqlType:"serial" sql:"PRIMARY KEY" json:"id"`
    Name  string `sql:"NOT NULL CHECK (name <> '')" json:"name"`
    Description  string `sql:"NOT NULL CHECK (description <> '')" json:"description"`
}
