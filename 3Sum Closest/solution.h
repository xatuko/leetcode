#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());

		int closest = nums[0] + nums[1] + nums[2];

		for (int i = 0; i < nums.size(); i++)
		{
			int l = i+1, r = nums.size()-1;

			while (l < r)
			{
				int tmp = nums[i] + nums[l] + nums[r];

				if (abs(target-closest) > abs(target-tmp))
					closest = tmp;

				(tmp > target) ? r-- : l++;
			}
		}
		return closest;
	}
};

#endif // SOLUTION_H