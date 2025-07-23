#include "gmock/gmock.h"
#include "similaritychecker.cpp"
#include <string>
using std::string;

TEST(TC, TC1) {
	EXPECT_EQ(1, 1);
}

TEST(Lengh, TC1) {
	LengthChecker lchecker;

	string input1 = "ABCDE";
	string input2 = "ABCDE";
	int expected = 60;
	int actual = lchecker.checkSimilarity(input1, input2);
	EXPECT_EQ(expected, actual);
}
TEST(Lengh, TC2) {
	LengthChecker lchecker;

	string input1 = "A";
	string input2 = "BB";
	int expected = 0;
	int actual = lchecker.checkSimilarity(input1, input2);
	EXPECT_EQ(expected, actual);
}
TEST(Lengh, TC3) {
	LengthChecker lchecker;

	string input1 = "AAABB";
	string input2 = "BAA";
	int expected = 20;
	int actual = lchecker.checkSimilarity(input1, input2);
	EXPECT_EQ(expected, actual);
}
TEST(Lengh, TC4) {
	LengthChecker lchecker;

	string input1 = "AA";
	string input2 = "AAE";
	int expected = 30;
	int actual = lchecker.checkSimilarity(input1, input2);
	EXPECT_EQ(expected, actual);
}
TEST(Lengh, TC5) {
	LengthChecker lchecker;

	string input1 = "AA";
	string input2 = "AAAAAAAAAAAAAAA";
	int expected = 0;
	int actual = lchecker.checkSimilarity(input1, input2);
	EXPECT_EQ(expected, actual);
}