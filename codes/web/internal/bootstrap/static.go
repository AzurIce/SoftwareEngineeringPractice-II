package bootstrap

import (
    "log"
    "net/http"

    _ "web/statik"

    "github.com/rakyll/statik/fs"
)

var StaticFS http.FileSystem

func init() {
    log.Println("[bootStrap/InitStaticFS]: Initializing...")
    var err error
    StaticFS, err = fs.New()
    if err != nil {
        log.Panicln(err)
    }
}

