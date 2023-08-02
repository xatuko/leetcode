#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <stack>

using namespace std;

class Solution {
public:
	bool isValid(string s)
	{
		stack<char*> st;
		for (auto& c : s)
		{
			if (c == '{' || c == '[' || c == '(')
			{
				st.push(&c);
				continue;
			}

			if (st.size() == 0) return false;

			switch (c)
			{
				case '}': if (*st.top() != '{') return false; break;
				case ']': if (*st.top() != '[') return false; break;
				case ')': if (*st.top() != '(') return false; break;
				default: return false;
			}

			st.pop();
		}

		return st.size() == 0;
	}
};

#endif // SOLUTION_H