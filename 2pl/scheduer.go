package main

import (
    "fmt"
    "log"
)

type Scheduer struct {
    heldTable [64]TaskList;
    reqTable  [64]TaskList;

    reqChan chan *Task
    doneChan chan *Task
}

func NewScheduer() *Scheduer {
    return &Scheduer{
        [64]TaskList{},
        [64]TaskList{},
        make(chan *Task),
        make(chan *Task),
    }
}

func (s *Scheduer) addTask(t *Task) {
    if s.heldTable[t.Target].Size() != 0 && (t.Type == WriteType || s.heldTable[t.Target].HasWriteType()) {
        s.reqTable[t.Target].Add(t)
    } else {
        s.heldTable[t.Target].Add(t)
        close(t.StartChan)
    }
}

func (s *Scheduer) finishTask(t *Task) {
    s.heldTable[t.Target].Remove(t)

    if s.reqTable[t.Target].Size() == 0 {
        return
    }

    firstReqTask, _ := s.reqTable[t.Target].get(0)
    if firstReqTask.Type == WriteType {
        fmt.Println("!!!!!! first is Write")
        s.reqTable[t.Target].Remove(firstReqTask)
        s.heldTable[t.Target].Add(firstReqTask)
        close(firstReqTask.StartChan)
        return
    }
    for i := 0; i < s.reqTable[t.Target].Size(); i++ {
        reqTask, _ := s.reqTable[t.Target].get(i)
        if reqTask.Type == WriteType {
            continue
        }
        s.reqTable[t.Target].Remove(reqTask)
        s.heldTable[t.Target].Add(reqTask)
        close(reqTask.StartChan)
        return
    }
}

func (s *Scheduer) tick() {
    for {
        select {
        case task := <- s.reqChan:
            log.Printf("[scheduer]: Get task request: %v\n", task)
            scheduer.addTask(task)
        case task := <- s.doneChan:
            log.Printf("[scheduer]: Get task done: %v\n", task)
            scheduer.finishTask(task)
        }
    }
}
