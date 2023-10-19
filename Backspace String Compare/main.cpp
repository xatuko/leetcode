#include <iostream>
#include "solution.h"

int main(int,char**)
{
    string s1 = "bxj##tw";
    string s2 = "bxo#j##tw";
    Solution s;
    std::cout << std::boolalpha << s.backspaceCompare(s1,s2) << std::endl;





    return 0;
}