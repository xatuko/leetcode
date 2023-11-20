#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution {
public:
	int divide(int dividend, int divisor) {
		if (dividend == divisor) return 1;
		uint32_t udividend = 0;
		uint32_t udivisor = 0;

		int sign = ((dividend < 0)^(divisor < 0)) ? -1 : 1;

		bool maxin = false;

		if (dividend < 0 && dividend == INT32_MIN)
		{
			udividend = INT32_MAX;
			udividend += 1;
		}
		else udividend = abs(dividend);

		if (divisor < 0 && divisor == INT32_MIN)
		{
			udivisor = INT32_MAX;
			udivisor += 1;
		}
		else udivisor = abs(divisor);

		if (udivisor > udividend) return 0;

		int msb = 30;
		for (; msb >= 0; msb--) if ((1 << msb) & udivisor) break;

		uint32_t tmp = 0;
		uint32_t qoutient = 0;

		for (int i = 31-msb; i >=0; i--)
		{
			if (tmp+(udivisor << i) <= udividend)
			{
				qoutient |= (1 << i);
				tmp += (udivisor << i);
			}
		}

		int result;

		if (sign == -1)
		{
			if (qoutient > INT32_MAX)
				result = INT32_MIN;
			else result = -int(qoutient);
		}
		else
		{
			if (qoutient > INT32_MAX) result = INT32_MAX;
			else result = int(qoutient);
		}

		return result;
	}
};

#endif // SOLUTION_H