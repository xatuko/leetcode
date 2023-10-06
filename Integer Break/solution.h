#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
using namespace std;

class Solution {
public:
	int integerBreak(int n) {
		if (n == 2 || n == 3) return n-1;
		int res = 1;
		while (n > 4)
		{
			res *= 3;
			n -= 3;
		}
		return n*res;
	}
};
#endif // SOLUTION_H