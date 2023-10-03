#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums)
	{
		int count = 0;
		for (size_t i = 1; i < nums.size(); i++)
			for (size_t j = 0; j < i; j++)
				if (nums[j] == nums[i])
					count++;
		return count;
	}
};

#endif // SOLUTION_H
