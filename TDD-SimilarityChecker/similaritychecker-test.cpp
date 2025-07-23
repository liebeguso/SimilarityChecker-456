#include "gmock/gmock.h"
#include "similaritychecker.cpp"
#include <string>
using std::string;

class LenghFixture : public testing::Test {
public:
	void doCheck(int expected, const string& input1, const string& input2)
	{
		int actual = lchecker.checkSimilarity(input1, input2);
		EXPECT_EQ(expected, actual);
	}
	LengthChecker lchecker;
};

TEST(TC, TC1) {
	EXPECT_EQ(1, 1);
}

TEST_F(LenghFixture, TC1) {
	doCheck(60, "ABCDE", "ABCDE");
}
TEST_F(LenghFixture, TC2) {
	doCheck(0, "A", "BB");
}
TEST_F(LenghFixture, TC3) {
	doCheck(20, "AAABB", "BAA");
}
TEST_F(LenghFixture, TC4) {
	doCheck(30, "AA", "AAE");
}
TEST_F(LenghFixture, TC5) {
	doCheck(0, "AA", "AAAAAAAAAAAAAAA");
}