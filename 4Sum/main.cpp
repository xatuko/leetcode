#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<int> in = {1,0,-1,0,-2,2};
    Solution s;
    auto res = s.fourSum(in,0);
    for (auto & v : res)
    {
        for (auto & el : v)
            std::cout << el << ' ';
        std::cout << std::endl;
    }



    return 0;
}