#include "pch.h"
#include <gtest/gtest.h>

using namespace std;

string lexicographicallyMinimalString(string, string);

TEST(Lexicographically_Minimal_String, Test_generic_strings) {
  EXPECT_EQ(lexicographicallyMinimalString("aca","bcf"),"abcacf");
}

TEST(Lexicographically_Minimal_String, Test_strings_duplicate_characters) {
	EXPECT_EQ(lexicographicallyMinimalString("acaccczzxxrcv", "bcaccczzxxrca"), "abcacacccccczzxxrcazzxxrcv");
}

TEST(Lexicographically_Minimal_String, Test_strings_different_length) {
	EXPECT_EQ(lexicographicallyMinimalString("adfrdsfacascfa", "aszczasr"), "aadfrdsfacascfaszczasr");
}
