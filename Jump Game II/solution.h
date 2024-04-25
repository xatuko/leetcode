#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:

	int search(vector<int>& nums, int step, int idx, int steps, std::unordered_map<int,int>& jump_table) {
		int minimum = INT32_MAX;

		if (idx + step >= nums.size()-1) {
			if (jump_table.find(idx) != jump_table.end())
				jump_table.insert({idx, steps+1});
			return steps+1;
		}

		if (jump_table.find(idx) != jump_table.end()) {
			if (jump_table[idx] <= steps+1)
				return -1;
		}

		idx += step;

		if (idx >= nums.size())
			return -1;

		for (int i = 1; i <= nums[idx]; i++) {
			int val = search(nums, i, idx, steps+1, jump_table);
			if (val < minimum && val != -1)
				minimum = val;
			if (minimum <= steps+2)
				break;
		}
		return minimum;
	}

	int jump(vector<int>& nums) {
		std::unordered_map<int,int> jump_table;
		int minimum = INT32_MAX;

		if (nums.size() == 1)
			return 0;

		for (int i = 1; i <= nums[0]; i++) {
			int val = search(nums, i, 0, 0, jump_table);
			if (val < minimum && val != -1)
				minimum = val;
		}

		return minimum;
	}
};

#endif // SOLUTION_H