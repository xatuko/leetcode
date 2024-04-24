#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

using namespace std;

class Solution {
public:
	string say(string str) {
		if (str == "1") return "11";

		string res = "";
		int cnt = 0;
		for (int i = 0; i < str.size(); i++) {
			cnt++;
			if (i < str.size()-1) {
				if (str[i] != str[i+1]) {
					res += to_string(cnt) + str[i];
					cnt = 0;
				}
			} else {
				if (str[i] != str[i-1]) {
					res += to_string(cnt) + str[i];
					cnt = 0;
				}
			}
		}

		if (cnt != 0)
			res += to_string(cnt) + str[str.size()-1];

		return res;
	}

	string countAndSay(int n) {
		if (n == 1) return "1";

		return say(countAndSay(n-1));
	}
};

#endif // SOLUTION_H