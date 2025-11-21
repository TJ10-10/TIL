// 25.testing.go
package main

func Add(a, b int) int {
    return a + b
}

--------------------------------------

// 25.testing_test.go
package main

import "testing"

func TestAdd(t *testing.T) {
    got := Add(2, 3)
    want := 5
    if got != want {
        t.Errorf("Add(2, 3) = %d; want %d", got, want)
    }
}

---------------------

go test
