#include <iostream>
#include <string>
using std::string;

class LengthChecker {
public:
	int checkSimilarity(const string& in1, const string& in2) {
		int size1 = (int)in1.length();
		int size2 = (int)in2.length();
		int gapSize = std::abs(size1 - size2);
		int smallStringSize = getSmallStringSize(size1, size2);

		return getSimilarityScore(gapSize, smallStringSize);
	}

private:
	int getSimilarityScore(int gapSize, int smallStringSize)
	{
		if (gapSize > smallStringSize * 2) return MIN_LENGTH_SIMILARITY;

		return MAX_LENGTH_SIMILARITY
			- (MAX_LENGTH_SIMILARITY * gapSize / smallStringSize);
	}
	int getSmallStringSize(const int size1, const int size2) {
		if ((size1 - size2) < 0) {
			return size1;
		}
		return size2;
	}
	const int MAX_LENGTH_SIMILARITY = 60;
	const int MIN_LENGTH_SIMILARITY = 0;
};