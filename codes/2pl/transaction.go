package main

import (
	"fmt"
	"math/rand"
	"strings"
	"time"
    "log"
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
    DependTransactions []*Transaction
}

func (t *Transaction) AddDep(depTr *Transaction) {
    for i, t := range t.DependTransactions {
        if t == nil {
            t.DependTransactions[i] = depTr
            return
        }
    }
    t.DependTransactions = append(t.DependTransactions, depTr)
}

func RemoveDep(depTr *Transaction) {
    for _, t := range transactions {
        for i, tt := range t.DependTransactions {
            if tt == depTr {
                t.DependTransactions[i] = nil
                continue
            }
        }
    }
}

func (t *Transaction) circle(first bool, targetTransaction *Transaction) bool {
    if !first && t == targetTransaction {
        return true
    }
    for _, dependTransaction := range t.DependTransactions {
        if dependTransaction == nil {
            continue
        }
        if dependTransaction.circle(false, targetTransaction) {
            return true
        }
    }
    return false
}

func (t *Transaction) restart() {
    debug()
    for _, task := range t.Tasks {
        scheduer.cancelReqTask(task)
        scheduer.cancelTask(task)
    }
    t.DependTransactions = make([]*Transaction, 0)
    RemoveDep(t)
    // time.Sleep(1 * time.Second)
    debug()
    t.WaitToStart()
}

func (t *Transaction) WaitToStart() {
    <- startSignal // A Signal to start all Transactions
    log.Println(cyan(fmt.Sprintf("Transaction %v growing phase📈", t.Id)))

    for _, task := range t.Tasks {
        fmt.Printf("[WaitToStart] Transaction %v - Target %v %s %v\n", t.Id, task.Target, magenta("getting lock"), task.Type)
        scheduer.reqChan <- task
        res := <- task.ReqResChan // Will block until it's closed
        if res != 1 {
            fmt.Printf(fgRed("[WaitToStart] Transaction %v: Detected deadlock, restarting...\n", t.Id))
            t.restart()
            return
        }
        // fmt.Printf("Transaction %v - Target %v %s\n", t.Id, task.Target, magenta("geted lock"))
    }

    log.Println(cyan(fmt.Sprintf("Transaction %v shrinking phase📉", t.Id)))

    for _, task := range t.Tasks {
        fmt.Printf("Transaction %v - Target %v %s %v\n", t.Id, task.Target, bgYellow("start"), task.Type)
        time.Sleep(task.Time)
        fmt.Printf("Transaction %v - Target %v %s %v\n", t.Id, task.Target, bgGreen("done"), task.Type)
        scheduer.doneChan <- task
    }
    log.Println(cyan(fmt.Sprintf("Transaction %v done ✅", t.Id)))
    doneChan <- 1
    // wg.Done()
    // cnt--;
}

// Utils

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
            id,
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
        make([]*Transaction, 0),
    }
}

func NewTransaction(id int, tasks []*Task) *Transaction {
    return &Transaction{
        id,
        tasks,
        make([]*Transaction, 0),
    }
}
