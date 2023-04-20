package models

type Course struct {
    ID           int    `sqlType:"serial" sql:"PRIMARY KEY" json:"id"`
    CreaterID    int `sql:"REFERENCES users" json:"creater_id"`
    Name         string `sql:"NOT NULL CHECK (name <> '')" json:"name"`
    Description  string `sql:"NOT NULL CHECK (description <> '')" json:"description"`
    IsPrivate    bool   `sql:"NOT NULL" json:"is_private"`
}
