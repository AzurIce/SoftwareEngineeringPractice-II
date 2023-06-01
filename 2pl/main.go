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

func AddTransaction(t *Transaction) {
    wg.Add(1)
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

func main() {
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
    fmt.Println("heldTable[1]: ", scheduer.heldTable[1])
    fmt.Println("heldTable[2]: ", scheduer.heldTable[2])
    fmt.Println("reqTable[1]: ", scheduer.reqTable[1])
    fmt.Println("reqTable[2]: ", scheduer.reqTable[2])
}
