#include <iostream>
#include "solution.h"

int main(int,char**)
{
    std::vector<int> in = {1,3,2,5,25,24,5};
    Solution s;
    std::cout << s.maxArea(in) << std::endl;
    return 0;
}