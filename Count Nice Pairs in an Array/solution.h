#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int rev(int val) {
		int result = 0;
		while (val != 0) {
			result *= 10;
			result += val % 10;
			val /= 10;
		}
		return result;
	}

	int countNicePairs(vector<int>& nums) {
		unordered_map<int,long> nums_table;

		for (int i = 0; i < nums.size(); i++)
		{
			int dif = nums[i]-rev(nums[i]);
			if (nums_table.find(dif) == nums_table.end())
				nums_table[dif] = 1;
			else nums_table[dif]++;
		}

		long total = 0;

		for (auto & [k,vec] : nums_table)
			total += ((vec*(vec-1)/2) % 1000000007);

		return total % 1000000007;
	}
};

#endif // SOLUTION_H