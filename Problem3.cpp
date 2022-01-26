#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

string lexicographicallyMinimalString(string jennyStack, string stephanieStack) {
	string result = "";
	int jennyStackLength = jennyStack.length();
	int stephanieStackLength = stephanieStack.length();
	int currentIndex1 = 0, currentIndex2 = 0;
	result = "";
	while (currentIndex1 < jennyStackLength && currentIndex2 < stephanieStackLength) {
		if (jennyStack[currentIndex1] != stephanieStack[currentIndex2])
		{
			if (jennyStack[currentIndex1] < stephanieStack[currentIndex2]) result += jennyStack[currentIndex1++];
			else result += stephanieStack[currentIndex2++];
		}
		if (jennyStack[currentIndex1] == stephanieStack[currentIndex2])
		{
			int counter = 0;
			while (jennyStack[currentIndex1 + counter] == stephanieStack[currentIndex2 + counter])
			{
				counter++;
			}
			if (jennyStack[currentIndex1 + counter] < stephanieStack[currentIndex2 + counter])
				result += jennyStack[currentIndex1++];
			else
				result += stephanieStack[currentIndex2++];
		}
	}
	while (currentIndex1 < jennyStackLength) result += jennyStack[currentIndex1++];
	while (currentIndex2 < stephanieStackLength) result += stephanieStack[currentIndex2++];
	return result;
}
