#ifndef SOLUTION_H
#define SOLUTION_H

#include <cmath>

using namespace std;

class Solution {
public:
	bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {

		int r = max(abs(fx-sx),abs(fy-sy));

		return (!r) ? t != 1 : r <= t;
	}
};

#endif // SOLUTION_H