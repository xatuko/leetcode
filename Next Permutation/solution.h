#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		int pivot_idx = nums.size()-1;
		int next_pivot_idx = nums.size()-1;

		if (nums.size() <= 1) return;

		while (pivot_idx > 0) {
			if (nums[pivot_idx-1] < nums[pivot_idx])
				break;
			pivot_idx--;
		}

		if (pivot_idx == 0) {
			for (int i = 0; i < nums.size()/2; i++)
				std::swap(nums[i], nums[nums.size()-1-i]);
			return;
		}

		pivot_idx--;

		while (next_pivot_idx > pivot_idx) {
			if (nums[next_pivot_idx] > nums[pivot_idx])
				break;
			next_pivot_idx--;
		}

		std::swap(nums[pivot_idx], nums[next_pivot_idx]);

		for (int f = pivot_idx+1, l = nums.size()-1; f < l; f++, l--) {
			std::swap(nums[f], nums[l]);
		}
	}
};

#endif // SOLUTION_H