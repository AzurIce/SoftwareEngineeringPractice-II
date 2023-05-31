package main

import (
	"log"
	"math/rand"
	"sync"
	"time"

    "github.com/faith/color"
)

// for start signal
var start chan int
var wg sync.WaitGroup

func (t *Transaction) WaitToStart() {
    wg.Add(1)
    <- start // Will block until start channel is closed
    log.Printf("Transaction %v starts\n", t.Id)

    for _, task := range t.Tasks {
        scheduerReqChan <- task

        <- task.StartChan // Will block until it's closed
        log.Printf("%v starts", task)
        time.Sleep(task.Time)
        scheduerDoneChan <- task
    }

    log.Printf("Transaction %v done\n", t.Id)
    wg.Done()
}

var scheduerReqChan chan *Task
var scheduerDoneChan chan *Task

func init() {
    start = make(chan int)
    scheduerReqChan = make(chan *Task)
    scheduerDoneChan = make(chan *Task)
}

func scheduer() {
    // lockTableHeld := [64][]Task{};
    // lockTableReq  := [64][]Task{};

    for {
        select {
        case task := <- scheduerReqChan:
            log.Printf("[scheduer]: Get task request: %v\n", task)
            close(task.StartChan)
        case task := <- scheduerDoneChan:
            log.Printf("[scheduer]: Get task done: %v\n", task)
        }
    }
}

func main() {
    rand.Seed(0)

    for i := 1; i <= 10; i++{
        genTransaction := RandTransaction(i)
        go genTransaction.WaitToStart()
        log.Printf("Generated Transaction: %v\n", genTransaction)
    }
    close(start)
    go scheduer()
    wg.Wait()
}
