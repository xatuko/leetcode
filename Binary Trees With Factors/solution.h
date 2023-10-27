#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
	int numFactoredBinaryTrees(vector<int>& arr) {
		sort(arr.begin(), arr.end(), [](int&a, int&b) { return b < a; });
		unordered_map<int,int> heads;
		int res = 0;
		for (int i = 0; i < arr.size(); i++)
		{
			heads[arr[i]] = 1;
			for (int j = i; j < arr.size(); j++)
			{
				int prod = arr[i]*arr[j];
				if (heads.find(prod) == heads.end())
					continue;

				heads[prod] += (arr[i] == arr[j]) ? 1 : 2;
			}
		}

		int total = 0;
		for (auto & [k,cnt] : heads)
			total += cnt;
		return total;
	}
};

#endif // SOLUTION_H