#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

string lexicographicallyMinimalString(string, string);

TEST(Lexicographically_Minimal_String, Test1) {
	EXPECT_EQ(lexicographicallyMinimalString("ACA", "BCF"), "ABCACF");
}

TEST(Lexicographically_Minimal_String, Test2) {
	EXPECT_EQ(lexicographicallyMinimalString("acaccczzxxrcv", "bcaccczzxxrca"), "abcacacccccczzxxrcazzxxrcv");
}

TEST(Lexicographically_Minimal_String, Test3) {
	EXPECT_EQ(lexicographicallyMinimalString("adfrdsfacascfa", "aszczasr"), "aadfrdsfacascfaszczasr");
}

string lexicographicallyMinimalString(string j, string s) {
	string result = "";
	int l1 = j.length();
	int l2 = s.length();
	int t1 = 0, t2 = 0;
	result = "";
	while (t1 < l1 && t2 < l2) {
		if (j[t1] != s[t2])
		{
			if (j[t1] < s[t2]) result += j[t1++];
			else result += s[t2++];
		}
		if (j[t1] == s[t2])
		{
			int ct = 0;
			while (j[t1 + ct] == s[t2 + ct])
			{
				ct++;
			}
			if (j[t1 + ct] < s[t2 + ct])
				result += j[t1++];
			else
				result += j[t2++];
		}
	}
	while (t1 < l1) result += j[t1++];
	while (t2 < l2) result += s[t2++];
	return result;
}