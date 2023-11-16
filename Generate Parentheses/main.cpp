#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    auto res = s.generateParenthesis(3);
    for (auto & r : res)
        cout << r << endl;
    return 0;


}