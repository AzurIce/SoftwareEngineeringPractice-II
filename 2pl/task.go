package main

import (
    "time"
    "fmt"
    "math/rand"
)

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
