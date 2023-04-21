package service

import (
	"fmt"
	"log"
	"prj2/internal/bootstrap"

	// "reflect"
	"strings"

	"github.com/gin-gonic/gin"
)

type SQLService struct {
	SQL string `form:"sql"`
}

/*
INSERT INTO users (username, nickname, password, usergroup) VALUES (00000, 00000, 00000, 3)

*/

func (s *SQLService) Handle(c *gin.Context) (any, error) {
	if strings.HasPrefix(s.SQL, "SELECT") || strings.HasPrefix(s.SQL, "select") {
		rows, err := bootstrap.DB.DB.Query(s.SQL)
		if err != nil {
			return nil, err
		}
		columns, err := rows.ColumnTypes()
		if err != nil {
			return nil, err
		}

		res := ""
		for rows.Next() {
			// var interfaceVar interface{}
			dataFields := make([]interface{}, len(columns))
			dataFieldsAddr := []interface{}{}
			// destFields := []interface{}{}
			for i := 0; i < len(columns); i++ {
				// dataFieldsAddr[i] = &dataFields[i]
				dataFieldsAddr = append(dataFieldsAddr, &dataFields[i])
				// destFields = append(destFields, reflect.New(reflect.TypeOf(interfaceVar))).Interface()
			}
			err := rows.Scan(dataFieldsAddr...)
			if err != nil {
				return nil, err
			}

			resStr := ""
			for i := 0; i < len(columns); i++ {
				resStr += fmt.Sprintf("%v, ", dataFields[i])
			}
			log.Println(resStr)
			res = fmt.Sprintf("%v\n%v", res, resStr)
		}
		fmt.Println(res)
		return res, nil
	} else {
		res, err := bootstrap.DB.Exec(s.SQL)
		if err != nil {
			return nil, err
		}
		if _, e := res.LastInsertId(); e != nil {
			return fmt.Sprintf("成功插入"), nil
		}
		if _, e := res.LastInsertId(); e != nil {
			return fmt.Sprintf("成功更新"), nil
		}
	}

	return nil, nil
}
