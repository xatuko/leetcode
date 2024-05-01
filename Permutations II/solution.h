#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:

	void gohard(vector<vector<int>>& result, vector<int>& nums, vector<int>& combo, unordered_set<int>& used_idx) {
		if (combo.size() == nums.size()) {
			result.push_back(combo);
			return;
		}

		for (int i = 0; i < nums.size(); i++) {
			if (used_idx.find(i) != used_idx.end())
				continue;

			combo.push_back(nums[i]);
			used_idx.insert(i);
			gohard(result,nums,combo,used_idx);
			used_idx.erase(i);
			combo.pop_back();

			while (i < nums.size()-1 && nums[i] == nums[i+1]) i++;
		}
	}

	vector<vector<int>> permuteUnique(vector<int>& nums) {
		vector<vector<int>> result;
		vector<int> combo;
		unordered_set<int> used_idx;

		sort(nums.begin(), nums.end());

		gohard(result,nums,combo,used_idx);

		return result;
	}
};

#endif // SOLUTION_H