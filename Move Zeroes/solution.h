#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {

public:
	void moveZeroes(vector<int>& nums) {
		size_t zero = 0;
		for (; zero < nums.size() && nums[zero] != 0; zero++);

		for (size_t i = zero; i < nums.size(); i++)
		{
			if (nums[i] != 0)
			{
				nums[zero] = nums[i];
				nums[i] = 0;
				if (nums[zero+1] == 0) zero++;
				else zero = i;
			}
		}
	}
};

#endif // SOLUTION_H