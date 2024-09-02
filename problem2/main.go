package main

import "fmt"

func main() {
	arr := []int{'a', 'b', 'c', 'd', 'f'}
	s := fmt.Sprint(findMissingLetter(arr))
	fmt.Printf("Missing letter: \"%s\" \n", s)
}

func findMissingLetter(list []int) string {
	char := 0
	for i := 0; i < len(list)-1; i++ {
		if list[i+1]-list[i] > 1 {
			char = list[i] + 1
			break
		}
	}
	return fmt.Sprint(char)
}
