#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
using namespace std;

class Solution {
public:
	string convertToTitle(int columnNumber)
	{
		string result;
		while (columnNumber)
		{
			char c = 64 + columnNumber % 26;
			if (c < 'A')
			{
				columnNumber--;
				c = 'Z';
			}
			result = string(&c,1) + result;
			columnNumber /= 26;
		}

		return result;
	}
};

#endif // SOLUTION_H
