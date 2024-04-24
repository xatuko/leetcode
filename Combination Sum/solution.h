#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	void findCombo(vector<int>& candidates, int sum, vector<vector<int>>& res, vector<int>& combo, int idx) {
		if (sum == 0) {
			res.push_back(combo);
			return;
		}

		while (idx < candidates.size() && sum - candidates[idx] >= 0) {
			combo.push_back(candidates[idx]);
			findCombo(candidates, sum-candidates[idx], res, combo, idx);
			idx++;
			combo.pop_back();
		}
	}


	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> result;
		vector<int> combo;

		sort(candidates.begin(), candidates.end());

		findCombo(candidates, target, result, combo, 0);

		return result;
	}
};

#endif // SOLUTION_H