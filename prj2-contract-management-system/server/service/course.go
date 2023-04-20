package service

import (
	"log"
	"prj2/internal/bootstrap"
	"prj2/internal/models"

	"github.com/gin-gonic/gin"
)

type CreateCourseService struct {
	Name        string `form:"name"`
	Description string `form:"description"`
	IsPrivate   bool   `form:"is_private"`
}

func (s *CreateCourseService) Handle(c *gin.Context) (any, error) {
    // Get id of the current user

    id := c.GetInt("id")

	course := &models.Course{
        CreaterID:   id,
		Name:        s.Name,
		Description: s.Description,
		IsPrivate:   s.IsPrivate,
	}

	res, err := bootstrap.DB.Insert(course)
	if err != nil {
		log.Printf("[CreateCourseService]: Error %v\n", err)
		return nil, err
	}
	log.Printf("[CreateCourseService]: Service created %v\n", res)

	return nil, nil
}

type UpdateCourseService struct {
    CourseID    int    `form:"course_id"`
	Name        string `form:"name"`
	Description string `form:"description"`
	IsPrivate   bool   `form:"is_private"`
}

func (s *UpdateCourseService) Handle(c *gin.Context) (any, error) {
    // Get id of the current user

	course := &models.Course{
		Name:        s.Name,
		Description: s.Description,
		IsPrivate:   s.IsPrivate,
	}

	res, err := bootstrap.DB.Update(course, s.CourseID)
	if err != nil {
		log.Printf("[CreateCourseService]: Error %v\n", err)
		return nil, err
	}
	log.Printf("[CreateCourseService]: Success %v\n", res)

	return nil, nil
}

type GetCoursesService struct {}

func (s *GetCoursesService) Handle(c *gin.Context) (any, error) {
    courses := &[]models.Course{}
	err := bootstrap.DB.Query(courses)
	if err != nil {
		log.Printf("[GetCoursesService]: Error %v\n", err)
		return nil, err
	}
	// log.Printf("[GetCoursesService]: Success %v\n", courses)

	return courses, nil
}

type GetJoinedCoursesService struct {}

func (s *GetJoinedCoursesService) Handle(c *gin.Context) (any, error) {
    courses := &[]models.Course{}
	err := bootstrap.DB.Query(courses, "id IN (SELECT course_id FROM user_courses WHERE user_id = $1)", c.GetInt("id"))
	if err != nil {
		log.Printf("[GetJoinedCoursesService]: Error %v\n", err)
		return nil, err
	}
	// log.Printf("[GetJoinedCoursesService]: Success %v\n", courses)

	return courses, nil
}

type GetCreatedCoursesService struct {}

func (s *GetCreatedCoursesService) Handle(c *gin.Context) (any, error) {
    courses := &[]models.Course{}
	err := bootstrap.DB.Query(courses, "creater_id = $1", c.GetInt("id"))
	if err != nil {
		log.Printf("[GetCreatedCoursesService]: Error %v\n", err)
		return nil, err
	}
	// log.Printf("[GetCreatedCoursesService]: Success %v\n", courses)

	return courses, nil
}

type JoinCourseService struct {
    CourseID int `form:"course_id"`
}

func (s *JoinCourseService) Handle(c *gin.Context) (any, error) {
    log.Println(s.CourseID, c.GetInt("id"))
    userCourse := &models.UserCourse{
        CourseID: s.CourseID,
        UserID: c.GetInt("id"),
    }
	_, err := bootstrap.DB.Insert(userCourse)
	if err != nil {
		log.Printf("[JoinCoursesService]: Error %v\n", err)
		return nil, err
	}
	// log.Printf("[JoinCoursesService]: Success %v\n", res)

	return nil, nil
}


type ExitCourseService struct {
    CourseID int `form:"course_id"`
}

func (s *ExitCourseService) Handle(c *gin.Context) (any, error) {
    log.Println(s.CourseID, c.GetInt("id"))
    // userCourse := &models.UserCourse{
    //     CourseID: s.CourseID,
    //     UserID: c.GetInt("id"),
    // }

	userCourse := &models.UserCourse{}
	err := bootstrap.DB.First(userCourse, "user_id = $1 AND course_id = $2", c.GetInt("id"), s.CourseID)
	if err != nil {
		return nil, err
	}
	log.Println(userCourse)

	res, err := bootstrap.DB.Delete(&models.UserCourse{}, userCourse.ID)
	if err != nil {
		log.Printf("[ExitCourseService]: Error %v\n", err)
		return nil, err
	}
	log.Printf("[ExitCourseService]: Success %v\n", res)

	return nil, nil
}

