// 24.custom_error.go
package main

import (
    "errors"
    "fmt"
)

type MushroomError struct {
    Kind string
    Msg  string
}

func (e *MushroomError) Error() string {
    return fmt.Sprintf("[%s] %s", e.Kind, e.Msg)
}

func checkMushroom(name string) error {
    if name != "nameko" {
        return &MushroomError{
            Kind: "NotMyKind",
            Msg:  fmt.Sprintf("%s は私の仲間じゃないかも…", name),
        }
    }
    return nil
}

func main() {
    if err := checkMushroom("shiitake"); err != nil {
        var me *MushroomError
        if errors.As(err, &me) {
            fmt.Println("カスタムエラー:", me)
        } else {
            fmt.Println("通常のエラー:", err)
        }
    }
}

