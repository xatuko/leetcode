#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int max_am = 0;

		for (size_t i = 0, j = height.size()-1; i < j;)
		{
			int cur = (j-i)*((height[i] < height[j]) ? height[i] : height[j]);
			if (cur > max_am)
			{
				max_am = cur;
				cur = 0;
			}

			if (height[i] > height[j])
				j--;
			else i++;
		}
		return max_am;
	}
};
#endif // SOLUTION_H