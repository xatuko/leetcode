#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		if (digits.size() == 0)
			return { 1 };

		for (int i = digits.size()-1; i >= 0; i--)
		{
			if (digits[i] == 9)
				digits[i] = 0;
			else
			{
				digits[i]++;
				break;
			}
		}

		if (!digits[0])
			digits.emplace(digits.begin(), 1);

		return digits;
	}
};

#endif // SOLUTION_H