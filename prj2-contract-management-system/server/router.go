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

        auth := api.Group("")
        auth.Use(middlewares.JWTAuth())
        {
            // TODO: apis
            course := auth.Group("course")
            {
                course.POST("", service.Handler(&service.CreateCourseService{}))
                course.PUT("", service.Handler(&service.UpdateCourseService{}))
                course.GET("", service.Handler(&service.GetCoursesService{}))
                course.GET("joined", service.Handler(&service.GetJoinedCoursesService{}))
                course.GET("created", service.Handler(&service.GetCreatedCoursesService{}))
                course.POST("join", service.Handler(&service.JoinCourseService{}))
                course.POST("exit", service.Handler(&service.ExitCourseService{}))
            }
        }
    }

    return r
}
