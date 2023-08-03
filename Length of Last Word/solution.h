#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		short len = 0;

		for (size_t i = 0; i < s.size();)
		{
			if (s[i] != ' ')
			{
				i++;
				len = 1;
				while (i < s.size() && s[i] != ' ')
				{
					i++; len++;
				}
			}
			else i++;
		}
		return len;
	}
};

#endif // SOLUTION_H