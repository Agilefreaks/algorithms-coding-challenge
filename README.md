## Go Approach

<br/>
Go must be installed to run these implementations<br/>
To run a problem: Go to the selected folder and call : `go run main.go` <br/>
To run the tests, by default , the command : `go test` will run all the tests<br/>
To run a specific test : `go test -run main_test.go` on the main file on desired problem.<br/>

## Problem 1

Given an integer array of size N, compute the sum of all even numbers in this array

## Problem 2

Write a method that takes an array of consecutive (increasing) letters as input and that returns the missing letter in the array.

You will always get a valid array. And it will be always exactly one letter be missing.
The length of the array will always be at least 2. The array will always contain letters in only one case.

```
["a","b","c","d","f"] -> "e"
["O","Q","R","S"] -> "P"
```

(Use the English alphabet with 26 letters!)

## Problem 3

Jenny and Stephanie are friends. Both of them like letters, especially uppercase ones.  
They are cutting uppercase letters from newspapers, and each one of them has his collection of letters stored in a stack.

One sunny day, Rachel visited Jenny and Stephanie. She saw their collections. She wondered what is the lexicographically minimal string made of those two collections. She can take a letter from a collection only when it is on the top of the stack. Rachel wants to use all of the letters in their collections.

As an example, assume Jenny has collected `a = [A, C, A]` and Stephanie has `b = [B, C, F]`. The example shows the top at index `0` for each stack of letters. Assemble the string as follows:

| Jenny | Stephanie | result |
| ----- | --------- | ------ |
| ACA   | BCF       |        |
| CA    | BCF       | A      |
| CA    | CF        | AB     |
| A     | CF        | ABC    |
|       | CF        | ABCA   |
|       | F         | ABCAC  |
|       |           | ABCACF |
