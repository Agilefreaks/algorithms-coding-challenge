#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

char missingCharacter(char[]);

char vector1[6] = { 'a','b','c','d','f' };
char vector2[5] = { 'O','Q','R','S' };

TEST(Test_Missing_Character, Test_lowercase_characters_vector) {
	EXPECT_EQ(missingCharacter(vector1), 'e');
}

TEST(Test_Missing_Character, Test_uppercase_characters_vector) {
	EXPECT_EQ(missingCharacter(vector2), 'P');
}
