#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
	void gohard(vector<vector<int>>& result, vector<int>& combo, vector<int>& nums, unordered_set<int>& used, int idx) {
		if (combo.size() == nums.size()) {
			result.push_back({combo.begin(), combo.end()});
			return;
		}

		for (int i = 0; i < nums.size(); i++) {
			if (used.find(nums[i]) != used.end())
				continue;

			used.insert(nums[i]);
			combo.push_back(nums[i]);
			gohard(result, combo, nums, used, 0);
			combo.pop_back();
			used.erase(nums[i]);
		}
	}

	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> result;
		std::vector<int> combo;
		unordered_set<int> used;

		for (int i = 0; i < nums.size(); i++) {
			combo.push_back(nums[i]);
			used.insert(nums[i]);
			gohard(result, combo, nums, used, i+1);
			used.erase(nums[i]);
			combo.pop_back();
		}

		return result;
	}
};

#endif // SOLUTION_H