#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;

    vector<int> in = { 8,9,9,9 };
    auto res = s.plusOne(in);


    for (auto & el : res)
        cout << el << ' ';
    cout << endl;
    return 0;
}