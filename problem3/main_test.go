package main

import (
	"reflect"
	"testing"
)

func TestCollection(t *testing.T) {
	testCases := []struct {
		name     string
		input1   []int
		input2   []int
		expected []string
	}{
		{"Collection [A B C A C F]", []int{'A', 'C', 'A'}, []int{'B', 'C', 'F'}, []string{"A", "B", "C", "A", "C", "F"}},
		{"Collection [A B C D E F]", []int{'A', 'C', 'E'}, []int{'B', 'D', 'F'}, []string{"A", "B", "C", "D", "E", "F"}},
		{"Collection [A B C]", []int{'A'}, []int{'B', 'C'}, []string{"A", "B", "C"}},
		{"Collection [A B C]", []int{'A', 'B', 'C'}, []int{}, []string{"A", "B", "C"}},
		{"Collection [A B C]", []int{}, []int{'A', 'B', 'C'}, []string{"A", "B", "C"}},
		{"Collection [A A A B B B]", []int{'A', 'A', 'A'}, []int{'B', 'B', 'B'}, []string{"A", "A", "A", "B", "B", "B"}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			result := castCollection(rCollection(tc.input1, tc.input2))
			if !reflect.DeepEqual(result, tc.expected) {
				t.Errorf("Expected %v, but got %v", tc.expected, result)
			}
		})
	}
}
