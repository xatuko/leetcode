#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
		vector<int> time(dist.size());
		for (int i = 0; i < dist.size(); i++)
			time[i] = (dist[i]%speed[i] > 0) ? dist[i]/speed[i]+1 : dist[i]/speed[i];

		sort(time.begin(), time.end());

		int i = 0;
		for (; i < time.size(); i++)
			if (i >= time[i]) return i;

		return i;
	}
};

#endif // SOLUTION_H