#ifndef SOLUTION_H
#define SOLUTION_H

#include <unordered_set>

using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		unordered_set<int> tmp;

		while (true)
		{
			if (tmp.find(n) != tmp.end()) return false;
			tmp.insert(n);
			if (n == 1) return true;

			int sum = 0;
			while (n != 0)
			{
				int dig = n % 10;
				n /= 10;
				sum += dig*dig;
			}
			n = sum;
		}

	}
};

#endif // SOLUTION_H