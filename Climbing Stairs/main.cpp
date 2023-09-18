#include <iostream>
#include "solution.h"

int main(int,char**)
{

    Solution s;
    for (int i = 0; i < 45; i++)
        std::cout << i << " : " << s.climbStairs(i) << endl;

    return 0;
}