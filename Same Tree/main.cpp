#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    cout << boolalpha << s.isValid("([)]") << endl;
    return 0;
}