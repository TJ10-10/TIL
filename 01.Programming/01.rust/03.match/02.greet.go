package main

import "fmt"

func greet(name string) string {
	return "こんにちは、" + name + "さん!"
}

func main() {
	message := greet("きのこ")
	fmt.Println(message)
}
