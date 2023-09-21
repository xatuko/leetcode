#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> getRow(int rowIndex)
	{
		vector<int> result(rowIndex+1, {1});

		result[0] = 1;
		result[rowIndex] = 1;

		if (rowIndex <= 1)
			return result;
		result[1] = 1;

		for (int i = 2; i < rowIndex+1; i++)
		{
			std::vector<int> tmp = result;

			for (int j = 1; j < i; j++)
				result[j] = tmp[j-1] + tmp[j];
		}

		return result;
	}
};

#endif // SOLUTION_H