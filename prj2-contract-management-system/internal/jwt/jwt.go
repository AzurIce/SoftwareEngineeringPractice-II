package jwt

import (
	// "log"
	"strings"
	"time"

	// "time"

	"github.com/gin-gonic/gin"
	"github.com/golang-jwt/jwt/v5"
)

var signedString = []byte("prj2")

type MyCustomClaims struct {
    UserID    int
	UserGroup int
	jwt.RegisteredClaims
}

func CreateToken(userID int, userGroup int) (string, error) {
	return jwt.NewWithClaims(jwt.GetSigningMethod("HS256"), MyCustomClaims{
        userID,
        userGroup,
        jwt.RegisteredClaims{
			// ExpiresAt: time.Now().Add(time.Minute * 1).Unix(),
		},
	}).SignedString(signedString)
}

func GetTokenStr(c *gin.Context) string {
	tokenStr := ""
	if c.Request.URL.Path == "/api/servers/console" {
		tokenStr = c.Query("token")
	} else {
		tokenStr = strings.ReplaceAll(c.Request.Header.Get("Authorization"), "Bearer ", "")
	}
	return tokenStr
}

func DecodeTokenStr(tokenStr string) (*jwt.Token, error) {
	var token *jwt.Token
	var err error
	// log.Println("Decoding", tokenStr)
    token, err = jwt.ParseWithClaims(tokenStr, &MyCustomClaims{}, func(token *jwt.Token) (interface{}, error) {
        return signedString, nil
    }, jwt.WithTimeFunc(func() time.Time {return time.Unix(0, 0)}))
	if err != nil {
		return token, err
	}
	return token, nil
}

func MustGetClaims(c *gin.Context) *MyCustomClaims {
    // log.Println("[MustGetClaims]: Getting token string...")
	tokenStr := GetTokenStr(c)
    // log.Printf("[MustGetClaims]: tokenStr: %s\n", tokenStr)
    // log.Println("[MustGetClaims]: decoding...")
	token, err := DecodeTokenStr(tokenStr)
    if err != nil {
        c.Abort()
    }
    // log.Println("[MustGetClaims]: done")
    // if claims, ok := token.Claims.(*MyCustomClaims); ok && token.Valid {
        // log.Println(claims)
	// fmt.Printf("%v %v", claims.Foo, claims.RegisteredClaims.Issuer)
    // } else {
        // log.Println(err)
    // }

	return token.Claims.(*MyCustomClaims)
}
