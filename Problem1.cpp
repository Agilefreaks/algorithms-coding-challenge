#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

int sumEvenNumbers(int[], int);

int vector1[5] = { 2,13,15,6,2 };
int vector2[10] = { 2,4,17,19,22,45,17,2,99,77 };
int vector3[5] = { 3,5,7,9,11};
int vector4[5] = { 2,4,6,8,10};
int vector5[5];

TEST(Sum_Even_Number_Tests, Test1) {
	EXPECT_EQ(sumEvenNumbers(vector1, 5), 10);
}

TEST(Sum_Even_Number_Tests, Test2) {
	EXPECT_EQ(sumEvenNumbers(vector2, 10), 30);
}

TEST(Sum_Even_Number_Tests, Test3) {
	EXPECT_EQ(sumEvenNumbers(vector3, 5), 0);
}

TEST(Sum_Even_Number_Tests, Test4) {
	EXPECT_EQ(sumEvenNumbers(vector4, 5), 30);
}

TEST(Sum_Even_Number_Tests, Test5) {
	EXPECT_EQ(sumEvenNumbers(vector5, 5), 0);
}

TEST(Sum_Even_Number_Tests, Test6) {
	EXPECT_EQ(sumEvenNumbers(vector5, 0), 0);
}

int sumEvenNumbers(int vector[], int length) {
	if (length != 0) {
		int sumOfEvenNumbers = 0;
		for (int index = 0; index < length; index++) {
			if (vector[index] % 2 == 0)
				sumOfEvenNumbers += vector[index];
		}
		return sumOfEvenNumbers;
	}
	else return 0;
}
