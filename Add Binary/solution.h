#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
	string addBinary(string a, string b)
	{
		string &l = (a.size() >= b.size()) ? a : b;
		string &s = (b.size() < a.size()) ? b : a;

		int over = 0;

		int j = l.size()-1;
		for (int i = s.size()-1; i >= 0; i--, j--)
		{
			if (s[i] == '1' && l[j] == '1')
			{
				if (over > 0) continue;

				l[j] = '0';
				over++;
				continue;
			}

			if (l[j] == '1' || s[i] == '1')
			{
				if (over > 0)
				{
					l[j] = '0';
					continue;
				}
				l[j] = '1';
				continue;
			}

			if (over > 0)
			{
				l[j] = '1';
				over--;
				continue;
			}
		}

		for (; j >= 0 && over > 0; j--)
		{
			if (l[j] == '1') l[j] = '0';
			else
			{
				l[j] = '1'; over--;
			}
		}

		if (over)
			l.insert(l.begin(), '1');

		return l;
	}
};

#endif // SOLUTION_H