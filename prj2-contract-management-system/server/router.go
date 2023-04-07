package server

import (
    "github.com/gin-gonic/gin"
    "prj2/server/middlewares"
    "prj2/internal/bootstrap"
)

func InitRouter() *gin.Engine {
    r := gin.Default()

    // TODO: static file middleware
    r.Use(middlewares.Frontend(bootstrap.StaticFS))
    // api := r.Group("api")
    {
        // No login required
        // user := api.Group("user")
        {
            // TODO: Login Service
            // user.POST("login", )
            // TODO: Register Service
            // user.POST("Register", )
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
