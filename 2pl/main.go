package main

import (
	"log"
	"math/rand"
	"time"
)

type TransactionType int

const (
    ReadType TransactionType = iota
    WriteType
)

func (t TransactionType) String() string {
    switch t {
    case ReadType:
        return "ReadType"
    case WriteType:
        return "WriteType"
    }
    return "Unknown"
}

type transaction struct {
    Id        int
    Target    int
    Type      int
    Second    int
    startChan chan int
}

var start chan int

func (t *transaction) PrepareToRun() {
    <- start
    log.Printf("Transaction %v starts\n", t.Id)

    scheduerReqChan <- t

    <- t.startChan
    time.Sleep(time.Duration(t.Second) * time.Second)
    scheduerDoneChan <- t
}

var scheduerReqChan chan *transaction
var scheduerDoneChan chan *transaction

func init() {
    start = make(chan int)
    scheduerReqChan = make(chan *transaction)
    scheduerDoneChan = make(chan *transaction)
}

func scheduer() {
    lockTableHeld := [64][]*transaction{};
    lockTableReq  := [64][]*transaction{};
    log.Println(len(lockTableHeld[0]))
    log.Println(len(lockTableReq[0]))
    for {
        select {
        case transaction := <- scheduerReqChan:
            target := transaction.Target
            log.Printf("Recieved request from %v: ", target)

            allRead := true
            for _, tr := range lockTableHeld[target] {
                if tr.Type == int(WriteType) {
                    allRead = false
                    break
                }
            }
            if allRead {
                added := false
                for i, tr := range lockTableHeld[target] {
                    if tr == nil {
                        lockTableHeld[target][i] = transaction
                        added = true
                    }
                }
                if !added {
                    lockTableHeld[target] = append(lockTableHeld[target], transaction)
                }
                close(transaction.startChan)
            } else {
                added := false
                for i, tr := range lockTableHeld[target] {
                    if tr == nil {
                        lockTableReq[target][i] = transaction
                        added = true
                    }
                }
                if !added {
                    lockTableReq[target] = append(lockTableReq[target], transaction)
                }
            }
        case transaction := <- scheduerDoneChan:
            target := transaction.Target
            id := transaction.Id
            log.Printf("Recieved done from %v: ", target)

            for i, tr := range lockTableHeld[target] {
                if tr.Id == id {
                    lockTableHeld[target][i] = nil
                }
            }
            if len(lockTableHeld[transaction.Target]) == 0 {
                lockTableHeld[transaction.Target] = append(lockTableHeld[transaction.Target], transaction)
            } else {
                lockTableReq[transaction.Target] = append(lockTableReq[transaction.Target], transaction)
            }
        }
    }
}

func main() {
    rand.Seed(0)

    go scheduer()
    for i := 1; i <= 100; i++{
        genTransaction := transaction{
            i,
            rand.Int() % 64,
            rand.Int() % 2,
            rand.Int() % 5,
            make(chan int),
        }
        go genTransaction.PrepareToRun()
        log.Printf("Generated Transaction: %#v\n", genTransaction)
    }
    close(start)
}
