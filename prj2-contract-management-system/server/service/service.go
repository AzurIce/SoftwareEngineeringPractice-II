package service

import (
    "prj2/internal/serializer"

    "log"
    "net/http"
    "io"

    "github.com/gin-gonic/gin"
)

type Service interface {
	Handle(c *gin.Context) (any, error)
}

// Handler is a controller bridge between router and service
func Handler(s Service) gin.HandlerFunc {
	return func(c *gin.Context) {
		// First bind the JSON to the service
		err := c.ShouldBindJSON(s)
		if err != nil && err != io.EOF {
			c.JSON(http.StatusBadRequest, serializer.ErrorResponse(err))
			return
		}

		// Then invoke the Handle method of the server
		res, err := s.Handle(c)
		if err != nil {
			log.Println(err.Error())
			c.JSON(http.StatusBadRequest, serializer.ErrorResponse(err))
		} else {
			log.Println("StatusOK")
			c.JSON(http.StatusOK, serializer.Response(res))
		}
	}
}
