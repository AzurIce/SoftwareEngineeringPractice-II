package models

import (
	"errors"
	"log"
	"prj2/internal/utils"
	"strings"
)

type User struct {
    ID        int    `sqlType:"serial" sql:"PRIMARY KEY" json:"id"`
    Username  string `sql:"NOT NULL CHECK (username <> '')" json:"username"`
    Nickname  string `sql:"NOT NULL CHECK (nickname <> '')" json:"nickname"`
    Password  string `sql:"NOT NULL" json:"-"`
    Usergroup int    `sql:"CHECK (usergroup BETWEEN 0 AND 3)" json:"usergroup"`
}

func (user *User) SetPassword(password string) {
	salt := utils.RandStringRunes(16)
	user.Password = utils.EncodePassword(password, salt)
}

func (user *User) CheckPassword(password string) error {
	salt := strings.Split(user.Password, ":")[0]
	log.Printf("用户密码为: %s", user.Password)
	log.Printf("盐: %s", salt)

	if user.Password != utils.EncodePassword(password, salt) {
        return errors.New("password incorrect")
    }
    return nil
}
