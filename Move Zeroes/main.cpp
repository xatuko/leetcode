#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    vector<int> in {2,1};
    s.moveZeroes(in);
    for (auto el : in)
        cout << el << ' ';
    cout << endl;
    return 0;
}