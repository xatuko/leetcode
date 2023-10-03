#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
	int titleToNumber(string columnTitle) {
		int result = 0;
		for (auto & c : columnTitle)
		{
			result *= 26;
			result += (c-64);
		}

		return result;
	}
};

#endif // SOLUTION_H
