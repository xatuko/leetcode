#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> res = {-1,-1};

		if (nums.size() == 0) return res;

		int l = 0, r = nums.size()-1;

		while (r-l > 1)
		{
			int mid = l+(r-l)/2;
			if (nums[mid] > target) r = mid;
			else l = mid;

			if (nums[l] > target || nums[r] < target) return {-1,-1};
		}
		if (nums[l] == target)
		{
			r = l;
			while (l != 0 && nums[l-1] == target) l--;
			while (r != nums.size()-1 && nums[r+1] == target) r++;
			return {l,r};
		}

		if (nums[r] == target)
		{
			l = r;
			while (l != 0 && nums[l-1] == target) l--;
			while (r != nums.size()-1 && nums[r+1] == target) r++;
			return {l,r};
		}

		return res;

	}
};
#endif // SOLUTION_H