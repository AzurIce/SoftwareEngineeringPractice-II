package models

type UserCourse struct {
    ID           int    `sqlType:"serial" sql:"PRIMARY KEY" json:"id"`
    UserID    int `sql:"REFERENCES users" json:"user_id"`
    CourseID         int `sql:"REFERENCES courses" json:"course_id"`
}
