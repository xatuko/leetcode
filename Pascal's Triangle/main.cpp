#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    std::vector<std::vector<int>> result = s.generate(5);
    for (auto & row : result)
    {
        for (auto & el : row)
            std::cout << el << ' ';
        std::cout << std::endl;
    }

    return 0;
}