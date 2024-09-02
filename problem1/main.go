package main

import "fmt"

func main() {
	n := 10
	arr := []int{}

	arr = generateArray(arr, n)

	fmt.Printf("The sum of even nums is: %d \n", evenSumNums(arr))
}

func evenSumNums(arr []int) int {
	sum := 0
	for _, num := range arr {
		if num%2 == 0 {
			sum += num
		}
	}
	return sum
}

func generateArray(arr []int, size int) []int {
	for i := range size {
		arr = append(arr, i)
	}
	return arr
}
