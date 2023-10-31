#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> findArray(vector<int>& pref) {
		if (pref.size() == 0) return { };

		int tmp = 0;
		vector<int> result(pref.size());
		for (int i = 0; i < pref.size(); i++)
		{
			result[i] = tmp ^ pref[i];
			tmp ^= (tmp ^ pref[i]);
		}
		return result;
	}
};

#endif // SOLUTION_H