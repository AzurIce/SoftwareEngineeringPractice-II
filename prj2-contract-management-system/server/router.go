package server

import "github.com/gin-gonic/gin"

func InitRouter() *gin.Engine {
    r := gin.Default()

    // TODO: static file middleware
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
