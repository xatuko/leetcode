#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
	double myPow(double x, int n) {
		if (x == 1) return 1;
		if (x == 0) return 0;
		if (x == -1) return (n % 2 == 0) ? 1 : -1;

		if (n == 1) return x;
		if (n == 0) return 1;
		if (n == -1) return 1/x;

		int nn = n;
		if (nn < 0)
			nn = (nn == (1 << 31)) ? ~nn : -n;
		double res = 1.0;

		for (int i = 30; i > 0; i--)
		{
			if ((nn >> i) & 1)
				res *= x;
			res *= res;
		}

		if (nn & 1)
			res *= x;

		return (n > 0) ? res : 1 / res;
	}
};

#endif // SOLUTION_H