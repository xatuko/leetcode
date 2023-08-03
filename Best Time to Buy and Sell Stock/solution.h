#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int max = 0;
		size_t li = 0, hi = 0;

		for (size_t i = 0; i < prices.size(); i++)
		{
			if (prices[li] > prices[i]) li = i;
			if (prices[hi] < prices[i] || hi < li) hi = i;

			int tmp = prices[hi] - prices[li];
			if (li < hi && tmp > max)
				max = tmp;
		}

		return max;
	}
};

#endif // SOLUTION_H