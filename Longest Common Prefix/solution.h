#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:

	char same(vector<string>& strs, size_t pos)
	{
		char tmp = '\0';
		for (auto & str : strs)
		{
			if (pos >= str.size())
				return false;

			if (tmp == '\0')
			{
				tmp = str[pos];
				continue;
			}

			if (str[pos] != tmp)
				return '\0';
		}

		return tmp;
	}

	string longestCommonPrefix(vector<string>& strs)
	{
		string res = "";
		char s = same(strs, 0);
		for (size_t i = 1; s != '\0'; i++)
		{
			res.push_back(s);
			s = same(strs, i);
		}
		return res;
	}
};

#endif // SOLUTION_H