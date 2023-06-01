package main

import (
	"errors"
)

type TaskList struct {
    tasks []*Task;
    sz    int
}

func (l *TaskList) Add(task *Task) {
    for i, t := range l.tasks {
        if t == nil {
            l.tasks[i] = task
            return
        }
    }
    l.tasks = append(l.tasks, task)
    l.sz++
}

func (l *TaskList) Remove(task *Task) {
    for i, t := range l.tasks {
        if t == task {
            l.tasks[i] = nil
            l.sz--
            return
        }
    }
}

func (l *TaskList) Size() int {
    return l.sz
}

func (l *TaskList) get(i int) (*Task, error) {
    if i >= l.sz {
        return nil, errors.New("Out of bound")
    }
    index := 0
    for _, t := range l.tasks {
        if t == nil {
            continue
        }
        if index == i {
            return t, nil
        }
        index++
    }
    return nil, nil
}

func (l *TaskList) HasWriteType() bool {
    for _, t := range l.tasks {
        if t == nil {
            continue
        }
        if t.Type == WriteType {
            return true
        }
    }
    return false
}

func (l *TaskList) Has(targetTask *Task) bool {
    for _, t := range l.tasks {
        if t == targetTask {
            return true
        }
    }
    return false
}
