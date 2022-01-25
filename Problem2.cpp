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
	int length = strlen(charVector);
	for (int index = 0; index < length - 1; index++) {
		if ((int)charVector[index + 1] != (int)charVector[index] + 1) {
			return (char)((int)charVector[index] + 1);
		}
	}
}
