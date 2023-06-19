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

func (s *Scheduer) cancelTask(t *Task) {
    if s.heldTable[t.Target].Has(t) {
    fmt.Printf("Canceling task: %v\n", t)
        s.finishTask(t)
    }
}

func (s *Scheduer) cancelReqTask(t *Task) {
    fmt.Printf("Canceling task: %v\n", t)
    s.reqTable[t.Target].Remove(t)
}

func (s *Scheduer) addTask(t *Task) {
    if s.heldTable[t.Target].Size() != 0 && (t.Type == WriteType || s.heldTable[t.Target].HasWriteType()) {
        for i := 0; i < s.heldTable[t.Target].Size(); i++ {
            task, _ := s.heldTable[t.Target].get(i)
            // Update the Dependencies
            transactions[t.TransactionId].AddDep(transactions[task.TransactionId])
        }
        // Check if circled
        if transactions[t.TransactionId].circle(true, transactions[t.TransactionId]) {
            t.ReqResChan <- 0 // DeadLock
            return
        }
        s.reqTable[t.Target].Add(t)
    } else {
        fmt.Printf("[addTask] Transaction %v - Target %v %s %v\n", t.TransactionId, t.Target, magenta("getted lock"), t.Type)
        s.heldTable[t.Target].Add(t)
        t.ReqResChan <- 1
    }
}

func (s *Scheduer) finishTask(t *Task) {
    s.heldTable[t.Target].Remove(t)
    fmt.Printf("Transaction %v - Target %v %s %v\n", t.TransactionId, t.Target, magenta("released lock"), t.Type)
    // fmt.Println("finished: ", t)
    // fmt.Println(s.reqTable[t.Target])

    if s.reqTable[t.Target].Size() == 0 {
        return
    }

    firstReqTask, _ := s.reqTable[t.Target].get(0)
    if firstReqTask.Type == WriteType {
        fmt.Printf("Transaction %v - Target %v %s %v\n", firstReqTask.TransactionId, firstReqTask.Target, magenta("getted lock"), firstReqTask.Type)
        s.reqTable[t.Target].Remove(firstReqTask)
        s.heldTable[t.Target].Add(firstReqTask)
        firstReqTask.ReqResChan <- 1
        return
    }
    for i := 0; i < s.reqTable[t.Target].Size(); i++ {
        reqTask, _ := s.reqTable[t.Target].get(i)
        if reqTask.Type == WriteType {
            continue
        }
        fmt.Printf("Transaction %v - Target %v %s %v\n", firstReqTask.TransactionId, firstReqTask.Target, magenta("getted lock"), firstReqTask.Type)
        s.reqTable[t.Target].Remove(reqTask)
        s.heldTable[t.Target].Add(reqTask)
        reqTask.ReqResChan <- 1
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
        // default:
        //     fmt.Println(cnt)
        //     time.Sleep(2 * time.Second)
        }
    }
}
