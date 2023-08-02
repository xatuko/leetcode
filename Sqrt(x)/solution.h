#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
	int mySqrt(int x) {
		if (x == 0 || x == 1)
			return x;

		int bits = 30;
		while (!(x >> bits)) bits--;
		int res = (1 << bits/2);

		while (res*res <= x)
		{
			if (res == 46340) return res;
			res++;
		}

		return res-1;
	}
};

#endif // SOLUTION_H