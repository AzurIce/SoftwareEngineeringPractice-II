package service

import (
	"log"
	"prj2/internal/bootstrap"
	"prj2/internal/jwt"
	"prj2/internal/models"

	"github.com/gin-gonic/gin"
)

type RegisterService struct {
    username string
    password string
}

func (s *RegisterService) Handle(c *gin.Context) (any, error) {
    // TODO: Register

    if err := bootstrap.DB.First(&models.User{}, "username LIKE $1", s.username); err != nil {
        // Already exists
        log.Printf("[Register]: User %v already exists.\n", s.username)
    } else {
        user := &models.User{
            Username: s.username,
            Nickname: s.username,
            Usergroup: 3,
        }
        user.SetPassword(s.password)
        res, err := bootstrap.DB.Insert(user)
        if err != nil {
            log.Printf("[RegisterService]: Error %v\n", err)
            return nil, err
        }
        log.Printf("[RegisterService]: User created %v\n", res)
    }

    return nil, nil
}

type LoginService struct {
    username string
    password string
}

func (s *LoginService) Handle(c *gin.Context) (any, error) {
    var err error
    user := &models.User{}
    if err = bootstrap.DB.First(user, "username LIKE $1", s.username); err != nil {
        return nil, err // User not exist
    }

    if err := user.CheckPassword(s.password); err != nil {
        return nil, err
    }

	var jwtToken string
	jwtToken, err = jwt.CreateToken(user.ID, user.Usergroup)

	res := make(map[string]any)
	res["token"] = jwtToken
	res["user"] = user
	// res["user_name"] = user.Username

	return res, nil
}
