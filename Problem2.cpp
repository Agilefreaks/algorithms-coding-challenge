#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

char missingCharacter(char[]);

char vector1[6] = { 'a','b','c','d','f' };
char vector2[5] = { 'O','Q','R','S' };

TEST(Test_Missing_Character, Test1) {
	EXPECT_EQ(missingCharacter(vector1), 'e');
}

TEST(Test_Missing_Character, Test2) {
	EXPECT_EQ(missingCharacter(vector2), 'P');
}

char missingCharacter(char charVector[])
{
	//Convert Vector
	int length = strlen(charVector);
	int* intVector;
	intVector = new int[length];
	for (int index = 0; index < length; index++)
		intVector[index] = charVector[index];
	//Compare Vector
	for (int index = 0; index < length - 1; index++) {
		if (intVector[index + 1] != intVector[index] + 1) {
			return (char)(intVector[index] + 1);
		}
	}
}
