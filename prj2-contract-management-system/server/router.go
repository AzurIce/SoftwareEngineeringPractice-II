package server

import (
	"prj2/internal/bootstrap"
	"prj2/server/middlewares"
	"prj2/server/service"

	"github.com/gin-contrib/cors"
	"github.com/gin-gonic/gin"
)

func InitRouter() *gin.Engine {
    r := gin.Default()

	config := cors.DefaultConfig()
	config.ExposeHeaders = []string{"Authorization"}
	config.AllowCredentials = true
	config.AllowAllOrigins = true
	config.AllowHeaders = []string{"Origin", "Content-Length", "Content-Type", "Authorization"}
	r.Use(cors.New(config))

    // TODO: static file middleware
    r.Use(middlewares.Frontend(bootstrap.StaticFS))
    api := r.Group("api")
    {
        // No login required
        user := api.Group("user")
        {
            // TODO: Login Service
            user.POST("login", service.Handler(&service.LoginService{}))
            // TODO: Register Service
            user.POST("register", service.Handler(&service.RegisterService{}))
        }

        // auth := api.Group("")
        // TODO: JWTAuth
        // api.use(middlewares.JWTAuth())
        {
            // TODO: apis
            // api.Group("contract")
            {

            }
        }
    }

    return r
}
