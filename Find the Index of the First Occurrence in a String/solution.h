#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		for (size_t i = 0; i < haystack.size(); i++)
		{
			if (haystack[i] == needle[0])
			{
				bool find = true;
				size_t j = 0;
				for (; j < needle.size() && i+j < haystack.size(); j++)
				{
					if (haystack[i+j] != needle[j])
					{
						find = false;
						break;
					}
				}
				if (j != needle.size()) find = false;
				if (find) return i;
			}
		}

		return -1;
	}
};

#endif // SOLUTION_H