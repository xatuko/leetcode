#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		if (nums.size() == 0) return 0;

		uint16_t l = 0, r = nums.size()-1;

		while (r-l > 1)
		{
			if (nums[l+(r-l)/2] > target)
				r -= (r-l)/2;
			else if (nums[l+(r-l)/2] < target)
				l += (r-l)/2;
			else return l+(r-l)/2;
		}

		if (nums[l] >= target) return l;
		if (nums[r] >= target) return r;
		return r+1;
	}
};

#endif // SOLUTION_H