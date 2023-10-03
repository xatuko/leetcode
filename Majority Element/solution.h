#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums)
	{
		int mjr, cnt = 0;

		for (size_t i = 0; i < nums.size(); i++)
		{
			if (cnt == 0)
			{
				mjr = nums[i];
				cnt++;
			}
			else if (mjr == nums[i]) cnt++;
			else cnt--;
		}

		return mjr;
	}
};

#endif // SOLUTION_H
