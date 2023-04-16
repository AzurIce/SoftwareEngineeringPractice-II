package utils

import (
	"crypto/sha1"
	"encoding/hex"
	"math/rand"
	"regexp"
	"strings"
)

var matchFirstCap = regexp.MustCompile("(.)([A-Z][a-z]+)")
var matchAllCap   = regexp.MustCompile("([a-z0-9])([A-Z])")

// ToSnakeCase turn the string to snake case
func ToSnakeCase(str string) string {
    snake := matchFirstCap.ReplaceAllString(str, "${1}_${2}")
    snake  = matchAllCap.ReplaceAllString(snake, "${1}_${2}")
    return strings.ToLower(snake)
}

// RandStringRunes 返回随机字符串
func RandStringRunes(n int) string {
	var letterRunes = []rune("1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")

	b := make([]rune, n)
	for i := range b {
		b[i] = letterRunes[rand.Intn(len(letterRunes))]
	}
	return string(b)
}

// EncodePassword encode password with salt
func EncodePassword(password string, salt string) string {
	//计算 Salt 和密码组合的SHA1摘要
	hash := sha1.New()
	hash.Write([]byte(password + salt))
	bs := hex.EncodeToString(hash.Sum(nil))

	//存储 Salt 值和摘要， ":"分割
	return salt + ":" + string(bs)
}
