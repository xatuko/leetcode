#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    std::vector<std::string> in = {"flower","flow","flight"};
    std::cout << s.longestCommonPrefix(in) << std::endl;
    return 0;
}