#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	string findDifferentBinaryString(vector<string>& nums) {
		string res;
		res.resize(nums.size());

		for (size_t i = 0; i < nums.size(); i++)
			res[i] = (nums[i][i] == '1') ? '0' : '1';

		return res;
	}
};

#endif // SOLUTION_H