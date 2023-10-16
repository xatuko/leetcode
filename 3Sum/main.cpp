#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<int> input = { 1,-1,-1,0 };
    Solution s;

    auto res = s.threeSum(input);

    for (auto & vec : res)
    {
        for (auto & el : vec)
            std::cout << el << ' ';
        std::cout << std::endl;
    }

    std::cout << std::endl;




    return 0;
}
