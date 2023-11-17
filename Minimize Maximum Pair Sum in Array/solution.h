#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int minPairSum(vector<int>& nums) {

		int imax = 0;
		int imin = 0;

		std::vector<int> hash(100001,0);

		for (int & num : nums)
		{
			hash[num]++;
			imax = max(num,imax);
			imin = min(num,imin);
		}

		int low = imin;
		int high = imax;
		int res = 0;

		while (low <= high)
		{
			if (hash[low] == 0) low++;
			else if (hash[high] == 0) high--;
			else
			{
				res = max(low+high,res);
				hash[low]--;
				hash[high]--;
			}
		}

		return res;
	}
};

#endif // SOLUTION_H