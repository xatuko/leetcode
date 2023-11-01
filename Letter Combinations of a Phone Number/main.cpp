#include <iostream>
#include "solution.h"

int main(int,char**)
{
    string in = "23";
    Solution s;
    auto res = s.letterCombinations(in);
    for (auto & str : res)
        std::cout << str << std::endl;



    return 0;
}