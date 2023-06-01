package main

import (
	"fmt"
	"math/rand"
	"strings"
	"time"
)

const (
    MaxTarget = 10
    MaxTask = 3
    MaxTime = 3
)

// Transaction
type Transaction struct {
    Id        int
    Tasks     []*Task
    StartChan chan int
}

func (t *Transaction) String() string {
    taskStrs := []string{}
    for _, task := range t.Tasks {
        taskStrs = append(taskStrs, task.String())
    }
    tasksStr := strings.Join(taskStrs, ",")
    res := fmt.Sprintf("Transaction<Id=%v, Tasks=[%v]>", t.Id, tasksStr)
    return res
}

func RandTransaction(id int) *Transaction {
    tasks := []*Task{};
    taskNum := rand.Int() % MaxTask + 1;
    targets := rand.Perm(MaxTarget)[:taskNum]
    for i := 0; i < taskNum; i++ {
        tasks = append(tasks, &Task{
            i,
            targets[i],
            RandLockType(),
            time.Duration(rand.Int() % MaxTime + 1) * time.Second,
            make(chan int),
        })
    }

    return &Transaction{
        id,
        tasks,
        make(chan int),
    }
}

