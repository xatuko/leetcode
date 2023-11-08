#include <iostream>
#include "solution.h"

int main(int,char**)
{
    int sx = 2, sy = 4, fx = 7, fy = 7, t = 6;
    Solution s;
    std::cout << boolalpha << s.isReachableAtTime(sx,sy,fx,fy,t) << std::endl;



    return 0;
}