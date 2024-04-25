#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
	string multiply(string num1, string num2) {
		vector<int> result(num1.size()+num2.size(), 0);
		int start_idx = 0;
		string ans = "";

		if (num1 == "0" || num2 == "0")
			return "0";

		for (int i = num1.size()-1; i >= 0; i--) {
			for (int j = num2.size()-1; j >= 0; j--) {
				result[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
				result[i+j] += result[i+j+1]/10;
				result[i+j+1] %= 10;
			}
		}

		while (result[start_idx] == 0) start_idx++;

		for (; start_idx < result.size(); start_idx++)
			ans += char(result[start_idx]+'0');

		return ans;
	}
};

#endif // SOLUTION_H