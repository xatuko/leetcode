#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int count = 0;
		for (size_t i = 0; i < 32; i++)
		{
			if (n & 1) count++;
			n >> 1;
		}
		return count;
	}
};

#endif // SOLUTION_H