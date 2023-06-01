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
        fmt.Printf("Transaction requesting lock: %v", task)
        scheduerReqChan <- task
        fmt.Printf("Transaction %v - Task %v - Target %v %s\n", t.Id, task.Id, task.Target, magenta("getting lock"))
        <- task.StartChan // Will block until it's closed
        fmt.Printf("Transaction %v - Task %v - Target %v %s\n", t.Id, task.Id, task.Target, magenta("geted lock"))
    }

    log.Println(cyan(fmt.Sprintf("Transaction %v shrinking phase📉", t.Id)))

    for _, task := range t.Tasks {
        fmt.Printf("Transaction %v - Task %v - Target %v %s\n", t.Id, task.Id, task.Target, bgYellow("start"))
        time.Sleep(task.Time)
        fmt.Printf("Transaction %v - Task %v - Target %v %s\n", t.Id, task.Id, task.Target, bgGreen("done"))
        scheduerDoneChan <- task
    }
    log.Println(cyan(fmt.Sprintf("Transaction %v done ✅", t.Id)))
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
    lockTableHeld := [64][]*Task{};
    lockTableReq  := [64][]*Task{};

    for {
        select {
        case task := <- scheduerReqChan:
            log.Printf("[scheduer]: Get task request: %v\n", task)
            close(task.StartChan)

            continue
            if task.Type == WriteType {
                // Not empty
                if len(lockTableHeld[task.Target]) > 0 {
                    // Insert to reqTable
                    for i, reqTask := range lockTableReq[task.Target] {
                        if reqTask == nil {
                            lockTableReq[task.Target][i] = task
                            return
                        }
                    }
                    lockTableReq[task.Target] = append(lockTableReq[task.Target], task)
                return
                    return
                }
                // Insert to heldTable
                for i, heldTask := range lockTableHeld[task.Target] {
                    if heldTask == nil {
                        lockTableHeld[task.Target][i] = task
                        close(task.StartChan)
                        return
                    }
                }
                lockTableHeld[task.Target] = append(lockTableHeld[task.Target], task)
                close(task.StartChan)
                return
            } else if task.Type == ReadType {
                // No one held, directly insert
                if len(lockTableHeld[task.Target]) == 0 || lockTableHeld[task.Type][0].Type == ReadType || len(lockTableHeld[task.Target]) > 1 {
                    for i, heldTask := range lockTableHeld[task.Target] {
                        if heldTask == nil {
                            lockTableHeld[task.Target][i] = task
                            close(task.StartChan)
                            return
                        }
                    }
                    lockTableHeld[task.Target] = append(lockTableHeld[task.Target], task)
                    close(task.StartChan)
                    return
                }

                // Insert into reqTable
                for i, reqTask := range lockTableReq[task.Target] {
                    if reqTask == nil {
                        lockTableReq[task.Target][i] = task
                        return
                    }
                }
                lockTableReq[task.Target] = append(lockTableReq[task.Target], task)
                return
            }
        case task := <- scheduerDoneChan:
            log.Printf("[scheduer]: Get task done: %v\n", task)
            // continue
            if task.Type == WriteType {
                lockTableHeld[task.Target] = nil
                if len(lockTableReq[task.Target]) == 0 {
                    continue
                }
                newTask := lockTableReq[task.Target][0]
                if newTask.Type == WriteType {
                    lockTableReq[task.Target][0] = nil
                    lockTableHeld[task.Target][0] = newTask
                    close(newTask.StartChan)
                    continue
                }
                breakFlag1 := false
                for _, reqTask := range lockTableReq[task.Target] {
                    if reqTask.Type == ReadType {
                        // Insert into HeldTable
                        breakFlag := false
                        for i, heldTask := range lockTableHeld[reqTask.Target] {
                            if heldTask == nil {
                                lockTableHeld[reqTask.Target][i] = reqTask
                                close(reqTask.StartChan)
                                breakFlag = true
                                break
                            }
                        }
                        if breakFlag {
                            breakFlag1 = true
                            break
                        }
                        lockTableHeld[reqTask.Target] = append(lockTableHeld[reqTask.Target], task)
                        close(reqTask.StartChan)
                        breakFlag1 = true
                    }
                }
                if breakFlag1 {
                    continue
                }
            }
            for _, reqTask := range lockTableReq[task.Target] {
                if reqTask.Type == ReadType {
                    // Insert into HeldTable
                    for i, heldTask := range lockTableHeld[reqTask.Target] {
                        if heldTask == nil {
                            lockTableReq[reqTask.Target][i] = nil
                            lockTableHeld[reqTask.Target][i] = reqTask
                            close(reqTask.StartChan)
                            continue
                        }
                    }
                    lockTableHeld[reqTask.Target] = append(lockTableHeld[reqTask.Target], task)
                    close(reqTask.StartChan)
                }
            }
        }
    }
}

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
    go scheduer()
    wg.Wait()
    fmt.Println(bbgGreen("---------- All done ----------"))
}
