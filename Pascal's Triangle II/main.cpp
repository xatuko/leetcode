#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;

    for (int i = 0; i < 6; i++)
    {
        auto result = s.getRow(i);

        for (auto & el : result)
            std::cout << el << ' ';
        std::cout << std::endl;
    }


    return 0;
}