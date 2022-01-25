#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

char missingCharacter(char[]);

char vc1[6] = { 'a','b','c','d','f' };
char vc2[5] = { 'O','Q','R','S' };

TEST(Test_Missing_Character, Test1) {
	EXPECT_EQ(missingCharacter(vc1), 'e');
}

TEST(Test_Missing_Character, Test2) {
	EXPECT_EQ(missingCharacter(vc2), 'P');
}

char missingCharacter(char c[])
{
	//Convert Vector
	int l = strlen(c);
	int* v;
	v = new int[l];
	for (int i = 0; i < l; i++)
		v[i] = c[i];
	//Compare Vector
	for (int i = 0; i < l - 1; i++) {
		if (v[i + 1] != v[i] + 1) {
			return (char)(v[i] + 1);
		}
	}
}