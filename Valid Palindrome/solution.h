#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

using namespace std;

class Solution {
public:
	char toLower(char& c)
	{
		if ('A' <= c && c <= 'Z')
			return c+32;
		return c;
	}

	bool isAlphanum(char& c)
	{
		return ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || ('0' <= c && c <= '9');
	}

	bool isPalindrome(string s)
	{
		if (s.size() == 0)
			return true;

		int i = 0, j = s.size()-1;

		for (; i < j;)
		{
			while (i < s.size() && !isAlphanum(s[i])) i++;
			while (j >= 0 && !isAlphanum(s[j])) j--;

			if (i == s.size() || j < 0) return true;

			if (toLower(s[i]) != toLower(s[j]))
				return false;

			i++;
			j--;
		}
		return true;
	}
};

#endif // SOLUTION_H