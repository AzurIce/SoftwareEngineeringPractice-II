package service

import "github.com/gin-gonic/gin"

type RegisterService struct {
    username string
    password string
}

func (s *RegisterService) Handle(c *gin.Context) (any, error) {
    // TODO: Register

    // TODO: return a jwt
    return nil, nil
}
