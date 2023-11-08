#ifndef SOLUTION_H
#define SOLUTION_H

#include <cmath>

using namespace std;

class Solution {
public:
	bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
		int rx = abs(fx-sx);
		int ry = abs(fy-sy);

		int r = (rx > ry) ? ry + (rx-ry) : rx + (ry-rx);

		if (r == 0 && t == 1) return false;

		return r <= t;
	}
};

#endif // SOLUTION_H