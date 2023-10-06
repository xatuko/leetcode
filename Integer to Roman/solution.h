#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <stack>
using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		string result;
		stack<int> digs;

		while (num != 0)
		{
			digs.push(num%10);
			num /= 10;
		}

		while (!digs.empty())
		{
			int dig = digs.top();
			if (digs.size() == 4)
			{
				for (int i = 0; i < digs.top(); i++)
					result += 'M';
			}
			else if (digs.size() == 3)
			{
				if (digs.top() < 4) for (int i = 0; i < digs.top(); i++) result += 'C';
				else if (digs.top() == 4) result += "CD";
				else if (digs.top() == 5) result += 'D';
				else if (digs.top() == 9) result += "CM";
				else
				{
					result += 'D';
					for (int i = 0; i < digs.top()-5; i++)
						result += 'C';
				}
			}
			else if (digs.size() == 2)
			{
				if (digs.top() < 4) for (int i = 0; i < digs.top(); i++) result += 'X';
				else if (digs.top() == 4) result += "XL";
				else if (digs.top() == 5) result += 'L';
				else if (digs.top() == 9) result += "XC";
				else
				{
					result += 'L';
					for (int i = 0; i < digs.top()-5; i++)
						result += 'X';
				}
			}
			else if (digs.size() == 1)
			{
				if (digs.top() < 4) for (int i = 0; i < digs.top(); i++) result += 'I';
				else if (digs.top() == 4) result += "IV";
				else if (digs.top() == 5) result += 'V';
				else if (digs.top() == 9) result += "IX";
				else
				{
					result += 'V';
					for (int i = 0; i < digs.top()-5; i++)
						result += 'I';
				}
			}
			digs.pop();
		}
		return result;
	}
};
#endif // SOLUTION_H