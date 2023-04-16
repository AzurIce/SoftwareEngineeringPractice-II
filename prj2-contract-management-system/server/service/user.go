package service

import (
	"log"
	"prj2/internal/bootstrap"
	"prj2/internal/jwt"
	"prj2/internal/models"

	"github.com/gin-gonic/gin"
)

type RegisterService struct {
    Username string `form:"username"`
    Password string `form:"password"`
}

func (s *RegisterService) Handle(c *gin.Context) (any, error) {
    // TODO: Register

    if err := bootstrap.DB.First(&models.User{}, "username LIKE $1", s.Username); err == nil {
        // Already exists
        log.Printf("[Register]: User %v already exists.\n", s.Username)
    } else {
        user := &models.User{
            Username: s.Username,
            Nickname: s.Username,
            Usergroup: 3,
        }
        user.SetPassword(s.Password)
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
    Username string `form:"username"`
    Password string `form:"password"`
}

func (s *LoginService) Handle(c *gin.Context) (any, error) {
    var err error
    user := &models.User{}
    if err = bootstrap.DB.First(user, "username LIKE $1", s.Username); err != nil {
        return nil, err // User not exist
    }

    if err := user.CheckPassword(s.Password); err != nil {
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
