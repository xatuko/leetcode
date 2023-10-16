#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());

		vector<vector<int>> result;

		for (int i = 0; i < nums.size(); i++)
		{
			if (i > 0 && nums[i] == nums[i-1]) continue;

			int l = i+1, r = nums.size()-1;

			while (l < r)
			{
				int sum = nums[i]+nums[l]+nums[r];
				if (sum == 0)
				{
					result.push_back({nums[i],nums[l],nums[r]});
					while (l < r && nums[l+1] == nums[l]) l++;
					while (r > l && nums[r-1] == nums[r]) r--;
					l++;
					r--;
					continue;
				}

				if (sum > 0)
				{
					r--;
					continue;
				}

				if (sum < 0)
				{
					l++;
					continue;
				}
			}
		}
		return result;
	}
};
#endif // SOLUTION_H