#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

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
