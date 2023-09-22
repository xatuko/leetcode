#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    vector<int> in {4,1,2,1,2};
    std::cout << s.singleNumber(in) << std::endl;
    return 0;
}