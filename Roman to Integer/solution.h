#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <unordered_map>

using namespace std;

class Solution {
	unordered_map<char, int> alph {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

public:
	int romanToInt(string s) {
		int result = 0;
		size_t i = 0;
		for (; i < s.size(); i++)
		{
			if (i < s.size()-1 && alph[s[i+1]] > alph[s[i]])
			{
				result += (alph[s[i+1]] - alph[s[i]]);
				i++;
				continue;
			}
			result += alph[s[i]];
		}

		return result;
	}

};

#endif // SOLUTION_H