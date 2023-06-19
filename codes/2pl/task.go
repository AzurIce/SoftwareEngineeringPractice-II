package main

import (
    "time"
    "fmt"
    "math/rand"
)

// Task
type Task struct {
    TransactionId int
    Id     int
    Target int
    Type   LockType
    Time   time.Duration
    ReqResChan chan int
}

// Utils

func (t *Task) String() string {
    return fmt.Sprintf("Task<TransactionId=%v, Target=%v, Type=%v, Time=%v>", t.TransactionId, t.Target, t.Type, t.Time)
}

func RandTask(transactionId int, id int) *Task {
    return NewTask(
        transactionId,
        id,
        rand.Int() % MaxTarget,
        RandLockType(),
        time.Duration(rand.Int() % MaxTime + 1) * time.Second,
    )
}

func NewTask(transactionId int, id int, target int, lockType LockType, timeDuration time.Duration) *Task {
    return &Task{
        transactionId,
        id,
        target,
        lockType,
        timeDuration,
        make(chan int),
    }
}

