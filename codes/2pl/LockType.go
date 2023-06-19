package main

import (
    "math/rand"
)

// LockType -> read | write
type LockType int

const (
    ReadType LockType = iota
    WriteType
)

func (t LockType) String() string {
    switch t {
    case ReadType:
        return "ReadType"
    case WriteType:
        return "WriteType"
    }
    return "Unknown"
}

func RandLockType() LockType {
    return LockType(rand.Int() % 2);
}
