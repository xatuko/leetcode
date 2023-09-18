#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <cmath>

using namespace std;

class Solution {
public:

	int climbStairs(int n)
	{
		if (n == 1) return 1;
		else if (n == 2) return 2;
		else if (n == 3) return 3;

		int prev = 3;
		int result = 5;

		while (n-4 != 0)
		{
			int tmp;
			tmp = result;
			result = result + prev;
			prev = tmp;
			n--;
		}

		return result;
	}
};

#endif // SOLUTION_H