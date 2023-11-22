#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<vector<int>> input = {{1,2,3},{4,5,6},{7,8,9}};
    Solution s;
    auto res = s.findDiagonalOrder(input);
    for (auto & el : res)
        cout << el << ' ';
    cout << endl;
    return 0;


}