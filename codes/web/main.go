package main

import (
    "web/server"
)

func main() {
    router := server.InitRouter()
    router.Run(":8888")
}
