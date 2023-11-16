#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	void generation(string prev, const int& n, int opened, int closed, std::vector<string>& result)
	{
		if (opened == n)
		{
			result.push_back(prev+string(opened-closed,')'));
			return;
		}

		if (opened < n)
			generation(prev+'(',n,opened+1, closed, result);
		if (closed < opened)
			generation(prev+')',n,opened,closed+1,result);
	}

	vector<string> generateParenthesis(int n) {
		vector<string> result;
		string beg = "(";

		generation(beg, n, 1, 0, result);

		return result;
	}
};

#endif // SOLUTION_H