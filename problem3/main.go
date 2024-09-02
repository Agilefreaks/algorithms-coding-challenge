package main

import (
	"fmt"
	"slices"
)

func main() {
	a := []int{'A', 'C', 'A'}
	b := []int{'B', 'C', 'F'}
	r := rCollection(a, b)

	fmt.Println("Rachel collection: ", castCollection(r))
}

func castCollection(arr []int) []string {
	charArr := []string{}
	for _, char := range arr {
		charArr = append(charArr, fmt.Sprint(char))
	}
	return charArr
}

func rCollection(a []int, b []int) []int {
	r := []int{}

	for len(a) > 0 && len(b) > 0 {
		if a[0] <= b[0] {
			r = append(r, a[0])
			a = slices.Delete(a, 0, 1)
		} else {
			r = append(r, b[0])
			b = slices.Delete(b, 0, 1)
		}
	}

	r = append(r, a...)
	r = append(r, b...)

	return r
}
