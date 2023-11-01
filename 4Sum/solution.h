#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
	set<vector<int>> tmp;
	vector<vector<int>> result;
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		if (nums.size() < 4)
			return { };

		sort(nums.begin(), nums.end());
		tmp.clear();
		result.clear();

		for (int a = 0; a < nums.size()-3; a++)
		{
			int64_t target_a = int64_t(target) - nums[a];
			for (int b = a+1; b < nums.size()-2; b++)
			{
				int c = b+1;
				int d = nums.size()-1;
				int64_t target_a_b = target_a - nums[b];

				while (c < d)
				{
					int64_t sum = nums[d]+nums[c];
					if (sum == target_a_b)
						if (tmp.insert({nums[a],nums[b],nums[d],nums[c]}).second)
							result.push_back({nums[a],nums[b],nums[d],nums[c]});

					if (sum > target_a_b)
					{
						while(d > c+1 && nums[d-1] == nums[d]) d--;
						d--;
					}
					else
					{
						while(c < d-1 && nums[c+1] == nums[c]) c++;
						c++;
					}
				}

				while (b < nums.size()-2 && nums[b] == nums[b+1]) b++;
			}
			while (a < nums.size()-3 && nums[a] == nums[a+1]) a++;
		}

		return result;
	}
};

#endif // SOLUTION_H