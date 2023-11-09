#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

using namespace std;

class Solution {
public:
	int countHomogenous(string s) {
		uint64_t total = 0;
		uint64_t cur_cnt = 0;
		char c = s[0];

		for (auto & si : s)
		{
			if (c != si)
			{
				cur_cnt = 1;
				c = si;
			}
			else cur_cnt++;
			total += cur_cnt;
		}

		return total % (uint64_t(10e8) + 7);
	}
};

#endif // SOLUTION_H