#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

class Solution {
public:
	vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
		int diag_cnt = nums.size();
		int max_line = 0;
		vector<int> result;

		for (int i = 0; i < nums.size(); i++)
			max_line = max(max_line, int(nums[i].size()));

		diag_cnt += (max_line-1);

		vector<stack<int>> diags(diag_cnt);

		for (int i = 0; i < nums.size(); i++)
			for (int j = 0; j < nums[i].size(); j++)
				diags[i+j].push(nums[i][j]);

		for (int i = 0; i < diags.size(); i++)
		{
			while (!diags[i].empty())
			{
				result.push_back(diags[i].top());
				diags[i].pop();
			}
		}

		return result;
	}
};

#endif // SOLUTION_H