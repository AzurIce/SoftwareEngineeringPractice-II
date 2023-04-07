package main

import (
    "prj2/server"
)

func main() {
    router := server.InitRouter()
    router.Run(":8888")
}
