package middlewares

import (
    "prj2/internal/jwt"

	"github.com/gin-gonic/gin"
	// "github.com/golang-jwt/jwt/v5"
)

func JWTAuth() gin.HandlerFunc {
	return func(c *gin.Context) {
        jwt.MustGetClaims(c)
		// tokenStr := jwt.GetTokenStr(c)
		// log.Println("[middlewares/JWTAuth]: Token: ", tokenStr)

		// token, err := jwt.DecodeTokenStr(tokenStr)
		// log.Println(token, err)

		// if err != nil || !token.Valid {
		// 	log.Println("[middlewares/JWTAuth]: Token not valid", err)
		// 	c.Abort()
		// 	return
		// }

		c.Next()
	}
}
