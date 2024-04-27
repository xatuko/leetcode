#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int jump(vector<int>& nums) {
		int steps = 0;

		if (nums.size() == 1)
			return steps;

		for (int i = 0; i < nums.size(); ) {
			int max_step = 0;
			int max_val = 0;
			for (int step = nums[i]; step >= 1; step--) {
				if (i+step >= nums.size()-1) {
					return steps+1;
				}

				if ((nums[i+step]+step) > (max_val+max_step)) {
					max_val = nums[i+step];
					max_step = step;
				}
			}
			i += max_step;
			steps++;
		}

		return steps;
	}
};

#endif // SOLUTION_H