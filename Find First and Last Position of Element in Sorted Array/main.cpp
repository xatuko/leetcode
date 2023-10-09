#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<int>  input = {5,7,7,8,8,10};

    Solution s;
    auto res = s.searchRange(input, 6);
    std::cout << res[0] << ' ' << res[1] << std::endl;
    return 0;
}