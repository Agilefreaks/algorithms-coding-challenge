#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

int sumEvenNumbers(int[], int);
int vec1[5] = { 2,13,15,6,2 };
int vec2[10] = { 2,4,17,19,22,45,17,2,99,77 };

TEST(Sum_Even_Number_Tests, Test1) {
	EXPECT_EQ(sumEvenNumbers(vec1, 5), 10);
	EXPECT_EQ(sumEvenNumbers(vec2, 10), 31);
}

int sumEvenNumbers(int v[], int l) {
	int s = 0;
	for (int i = 0; i < l; i++) {
		if (v[i] % 2 == 0)
			s += v[i];
	}
	return s;
}