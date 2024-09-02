package main

import "testing"

func TestArraySize(t *testing.T) {
	arr := []int{}
	arr = generateArray(arr, 10)

	result := len(arr)
	expected := 10

	if result != expected {
		t.Errorf("Expected array size of %v, but got %v", expected, result)
	}
}

func TestSumEvenNums(t *testing.T) {
	arr := []int{}
	arr = generateArray(arr, 10)

	result := evenSumNums(arr)
	expected := 20

	if result != expected {
		t.Errorf("Expected the result of sum : %v, but got %v", expected, result)
	}
}
