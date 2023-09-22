#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums)
	{
		int result = 0;
		for (auto & el : nums)
			result ^= el;
		return result;
	}
};

#endif // SOLUTION_H