package main

import (
	"math/rand"
	"sync"
	"time"
    "fmt"

	"github.com/fatih/color"
)

// for start signal
var startSignal chan int = make(chan int)
var wg sync.WaitGroup

var cyan = color.New(color.FgCyan).SprintFunc()
var bgWhiteFgBlack = color.New(color.BgWhite, color.FgBlack).SprintfFunc()
var bgYellow = color.New(color.FgYellow).SprintfFunc()
var bgGreen = color.New(color.FgGreen).SprintfFunc()
var bbgGreen = color.New(color.BgGreen, color.FgBlack).SprintfFunc()
var magenta = color.New(color.FgMagenta).SprintfFunc()
var fgRed = color.New(color.FgRed).SprintfFunc()

var scheduer = NewScheduer()
var transactions = []*Transaction{};

var cnt = 0

func AddTransaction(t *Transaction) {
    wg.Add(1)
    cnt++
    transactions = append(transactions, t)
    go t.WaitToStart()
}

func AddDeadlockTransaction() {
    AddTransaction(NewTransaction(0, []*Task{
        NewTask(0, 0, 1, WriteType, 3 * time.Second),
        NewTask(0, 1, 2, WriteType, 3 * time.Second),
    }))
    AddTransaction(NewTransaction(1, []*Task{
        NewTask(1, 0, 2, ReadType, 3 * time.Second),
        NewTask(1, 1, 1, ReadType, 3 * time.Second),
    }))
}

var doneChan chan int = make(chan int)

func main() {
    go func() {
        for {
            <-doneChan
            wg.Done()
        }
    }()
    rand.Seed(0)

    fmt.Println(bgWhiteFgBlack("---------- Generating Transactions ----------"))
    // AddDeadlockTransaction()
    for i := 0; i < 10; i++{
        // wg.Add(1)
        genTransaction := RandTransaction(i)
        AddTransaction(genTransaction)
        // go genTransaction.WaitToStart()
        fmt.Printf("Generated Transaction: %v\n", genTransaction)
    }
    fmt.Println(transactions)
    fmt.Println(bgWhiteFgBlack("---------- Now starts ----------"))
    start()
    wg.Wait()
    fmt.Println(bbgGreen("---------- All done ----------"))
}

func start() {
    close(startSignal)
    go scheduer.tick()
}


func debug() {
    fmt.Println("heldTable[1]: ")
    for i := 0; i < scheduer.heldTable[1].Size(); i++ {
        fmt.Println(scheduer.heldTable[1].get(i))
    }
    fmt.Println("heldTable[2]: ")
    for i := 0; i < scheduer.heldTable[2].Size(); i++ {
        fmt.Println(scheduer.heldTable[2].get(i))
    }
    fmt.Println("reqTable[1]: ")
    for i := 0; i < scheduer.reqTable[1].Size(); i++ {
        fmt.Println(scheduer.reqTable[1].get(i))
    }
    fmt.Println("reqTable[2]: ")
    for i := 0; i < scheduer.reqTable[2].Size(); i++ {
        fmt.Println(scheduer.reqTable[2].get(i))
    }
}
