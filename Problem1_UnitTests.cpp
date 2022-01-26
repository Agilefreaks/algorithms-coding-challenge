#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

int sumEvenNumbers(int[], int);

int vector1[5] = { 2,13,15,6,2 };
int vector2[10] = { 2,4,17,19,22,45,17,2,99,77 };
int vector3[5] = { 3,5,7,9,11 };
int vector4[5] = { 2,4,6,8,10 };
int vector5[5];

TEST(Sum_Even_Number_Tests, Test1) {
	EXPECT_EQ(sumEvenNumbers(vector1, 5), 10);
}

TEST(Sum_Even_Number_Tests, Test2) {
	EXPECT_EQ(sumEvenNumbers(vector2, 10), 30);
}

TEST(Sum_Even_Number_Tests, Test_all_odd_numbers_vector) {
	EXPECT_EQ(sumEvenNumbers(vector3, 5), 0);
}

TEST(Sum_Even_Number_Tests, Test_all_even_numbers_vector) {
	EXPECT_EQ(sumEvenNumbers(vector4, 5), 30);
}

TEST(Sum_Even_Number_Tests, Test_empty_vector_correct_length) {
	EXPECT_EQ(sumEvenNumbers(vector5, 5), 0);
}

TEST(Sum_Even_Number_Tests, Test_empty_vector_wrong_length) {
	EXPECT_EQ(sumEvenNumbers(vector5, 0), 0);
}
