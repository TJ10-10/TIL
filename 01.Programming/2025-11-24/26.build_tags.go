// +build debug

// 26.build_tags.go
package main

import "fmt"

func init() {
    fmt.Println("🔧 デバッグビルドです")
}


// 通常のビルドではこのファイルは無視される
// 実行時： go run -tags=debug 26.build_tags.go

