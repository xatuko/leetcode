#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows)
	{
		vector<vector<int>> result(numRows);
		for (int i = 0; i < numRows; i++)
		{
			result[i].resize(i+1);
			result[i][0] = 1;
			result[i][i] = 1;

			if (i <= 1) continue;

			for (int j = 1; j <= i-1; j++)
				result[i][j] = result[i-1][j-1] + result[i-1][j];
		}

		return result;
	}
};

#endif // SOLUTION_H