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

// LockType -> read | write
type LockType int

const (
    ReadType LockType = iota
    WriteType
)

func (t LockType) String() string {
    switch t {
    case ReadType:
        return "ReadType"
    case WriteType:
        return "WriteType"
    }
    return "Unknown"
}

func RandLockType() LockType {
    return LockType(rand.Int() % 2);
}

// Task
type Task struct {
    Id     int
    Target int
    Type   LockType
    Time   time.Duration
    StartChan chan int
}

func (t *Task) String() string {
    return fmt.Sprintf("Task<Id=%v, Target=%v, Type=%v, Time=%v>", t.Id, t.Target, t.Type, t.Time)
}

func RandTask(id int) *Task {
    return &Task{
        id,
        rand.Int() % MaxTarget,
        RandLockType(),
        time.Duration(rand.Int() % MaxTime + 1) * time.Second,
        make(chan int),
    }
}

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
    for i := 1; i <= taskNum; i++ {
        tasks = append(tasks, RandTask(i))
    }

    return &Transaction{
        id,
        tasks,
        make(chan int),
    }
}

