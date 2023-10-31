#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<int> in = { 5,2,0,3,1 };
    Solution s;
    auto res = s.findArray(in);
    for (auto & el : res)
        std::cout << el << ' ';
    std::cout << std::endl;


    return 0;
}