#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
	int numFactoredBinaryTrees(vector<int>& arr) {
		sort(arr.begin(), arr.end());
		unordered_map<int,long> fmap;
		int result = 0;

		for (int & a : arr)
		{
			long ways = 1;
			double lim = sqrt(a);
			for (int i = 0, fA = arr[0]; fA <= lim; fA = arr[++i])
			{
				if (a % fA != 0) continue;
				int fB = a / fA;
				if (fmap.find(fB) != fmap.end())
					ways += fmap[fA] * fmap[fB] * (fA == fB ? 1 : 2);
			}
			fmap[a] = ways;
			result = (result + ways) % 1000000007;
		}
		return result;
	}
};

#endif // SOLUTION_H