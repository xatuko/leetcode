#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
	vector<string> letterCombinations(string digits) {
		if (digits.empty()) return { };
		unordered_map<char, string> buts {
			{ '2', "abc" }, { '3', "def" }, { '4', "ghi" }, {'5', "jkl" },
			{ '6', "mno"}, { '7', "pqrs" }, { '8', "tuv" }, { '9', "wxyz" }};

		int cnt = 1;
		for (auto & c : digits)
			cnt *= buts[c].size();

		vector<string> result(cnt);

		for (auto & c : digits)
		{
			cnt /= buts[c].size();
			int reps = cnt;
			int let = 0;

			for (auto & s : result)
			{
				s.push_back(buts[c][let]);
				if (--reps == 0)
				{
					(let == buts[c].size()-1) ? let = 0 : let++;
					reps = cnt;
				}
			}
		}

		return result;
	}
};

#endif // SOLUTION_H