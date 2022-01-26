#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

char missingCharacter(char charVector[])
{
	int length = strlen(charVector);
	for (int index = 0; index < length - 1; index++) {
		if ((int)charVector[index + 1] != (int)charVector[index] + 1) {
			return (char)((int)charVector[index] + 1);
		}
	}
}
