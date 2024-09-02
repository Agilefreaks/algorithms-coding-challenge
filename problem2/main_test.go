package main

import "testing"

func TestMissingLetter(t *testing.T) {
	testCases := []struct {
		name     string
		input    []int
		expected string
	}{
		{"Missing 'd'", []int{'a', 'b', 'c', 'e'}, "d"},
		{"Missing 'b'", []int{'a', 'c', 'd', 'e'}, "b"},
		{"Missing 'P'", []int{'O', 'Q', 'R', 'S'}, "P"},
		{"No missing letter", []int{'a', 'b', 'c', 'd', 'e'}, ""},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			result := findMissingLetter(tc.input)
			if result != tc.expected {
				t.Errorf("Expected %v, but got %v", tc.expected, result)
			}
		})
	}
}
