#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    std::cout << std::boolalpha << s.isPalindrome("A man, a plan, a canal: Panama") << std::endl;
    std::cout << std::boolalpha << s.isPalindrome("race a car") << std::endl;
    std::cout << std::boolalpha << s.isPalindrome(" ") << std::endl;

    return 0;
}