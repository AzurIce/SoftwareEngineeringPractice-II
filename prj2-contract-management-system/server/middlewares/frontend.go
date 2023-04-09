package middlewares

import (
	"net/http"
	"strings"
    "log"
	"github.com/gin-gonic/gin"
)

func Frontend(fs http.FileSystem) gin.HandlerFunc {
	fileServer := http.FileServer(fs)
	return func(c *gin.Context) {
		path := c.Request.URL.Path
        
        log.Println(path)

		// API 跳过
		if strings.HasPrefix(path, "/api") {
			c.Next()
		} else {
            if strings.LastIndex(path, ".") == -1 {
                c.Request.URL.Path += ".html"
            }
			fileServer.ServeHTTP(c.Writer, c.Request)
		}
	}
}
