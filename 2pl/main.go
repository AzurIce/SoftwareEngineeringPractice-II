package main

import (
	"log"
	"math/rand"
	"sync"
	"time"
    "fmt"

	"github.com/fatih/color"
)

// for start signal
var start chan int
var wg sync.WaitGroup

var cyan = color.New(color.FgCyan).SprintFunc()
var bgWhiteFgBlack = color.New(color.BgWhite, color.FgBlack).SprintfFunc()
var bgYellow = color.New(color.FgYellow).SprintfFunc()
var bgGreen = color.New(color.FgGreen).SprintfFunc()
var bbgGreen = color.New(color.BgGreen, color.FgBlack).SprintfFunc()
var magenta = color.New(color.FgMagenta).SprintfFunc()

func (t *Transaction) WaitToStart() {
    <- start // Will block until start channel is closed
    log.Println(cyan(fmt.Sprintf("Transaction %v growing phase📈", t.Id)))

    for _, task := range t.Tasks {
        scheduer.reqChan <- task
        fmt.Printf("Transaction %v - Task %v - Target %v %s\n", t.Id, task.Id, task.Target, magenta("getting lock"))
        <- task.StartChan // Will block until it's closed
        fmt.Printf("Transaction %v - Task %v - Target %v %s\n", t.Id, task.Id, task.Target, magenta("geted lock"))
    }

    log.Println(cyan(fmt.Sprintf("Transaction %v shrinking phase📉", t.Id)))

    for _, task := range t.Tasks {
        fmt.Printf("Transaction %v - Task %v - Target %v %s\n", t.Id, task.Id, task.Target, bgYellow("start"))
        time.Sleep(task.Time)
        fmt.Printf("Transaction %v - Task %v - Target %v %s\n", t.Id, task.Id, task.Target, bgGreen("done"))
        scheduer.doneChan <- task
    }
    log.Println(cyan(fmt.Sprintf("Transaction %v done ✅", t.Id)))
    wg.Done()
}

func init() {
    start = make(chan int)
}

var scheduer = NewScheduer()

func main() {
    rand.Seed(0)

    fmt.Println(bgWhiteFgBlack("---------- Generating Transactions ----------"))
    for i := 1; i <= 10; i++{
        wg.Add(1)
        genTransaction := RandTransaction(i)
        go genTransaction.WaitToStart()
        fmt.Printf("Generated Transaction: %v\n", genTransaction)
    }
    fmt.Println(bgWhiteFgBlack("---------- Now starts ----------"))
    close(start)
    go scheduer.tick()
    wg.Wait()
    fmt.Println(bbgGreen("---------- All done ----------"))
}
