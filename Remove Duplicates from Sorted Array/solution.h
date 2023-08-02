#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;


class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() <= 1)
			return nums.size();

		int k = 1;
		size_t prev_pos = 0;
		int cur = nums[0];

		for (size_t i = 1; i < nums.size();)
		{
			while (i < nums.size() && cur == nums[i]) i++;
			if (i == nums.size())
				return k;
			nums[++prev_pos] = nums[i];
			cur = nums[i];
			i++;
			k++;
		}
		return k;
	}
};

#endif // SOLUTION_H