#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

using namespace std;

class Solution {
public:
	bool backspaceCompare(string s, string t) {
		string rs, rt;
		rs.resize(s.size());
		rt.resize(t.size());

		int i = 0;
		for (auto & c : s)
		{
			if (c == '#') { i -= (i == 0) ? 0 : 1; continue; }
			rs[i] = c; i++;
		}
		rs.resize(i);

		i = 0;
		for (auto & c : t)
		{
			if (c == '#') { i -= (i == 0) ? 0 : 1; continue; }
			rt[i] = c; i++;
		}
		rt.resize(i);

		return rt == rs;
	}
};

#endif // SOLUTION_H