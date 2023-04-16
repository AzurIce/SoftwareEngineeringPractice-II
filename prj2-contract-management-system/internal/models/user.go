package models

import (
	"crypto/sha1"
	"encoding/hex"
	"prj2/internal/utils"
)

type User struct {
	ID        int    `sqlType:"serial" sql:"PRIMARY KEY"`
	Username  string `sql:"NOT NULL CHECK (username <> '')"`
	Nickname  string `sql:"NOT NULL CHECK (nickname <> '')"`
	Password  string `sql:"NOT NULL CHECK (CHAR_LENGTH(password) BETWEEN 6 AND 20)"`
	Usergroup int    `sql:"CHECK (usergroup BETWEEN 0 AND 3)"`
}

// SetPassword 根据给定明文设定 User 的 Password 字段
func (user *User) SetPassword(password string) error {
	//生成16位 Salt
	salt := utils.RandStringRunes(16)

	//计算 Salt 和密码组合的SHA1摘要
	hash := sha1.New()
	_, err := hash.Write([]byte(password + salt))
	bs := hex.EncodeToString(hash.Sum(nil))

	if err != nil {
		return err
	}

	//存储 Salt 值和摘要， ":"分割
	user.Password = salt + ":" + string(bs)
	return nil
}
