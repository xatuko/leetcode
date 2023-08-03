#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<int> in {3,2,6,5,0,3};
    Solution s;
    cout << s.maxProfit(in) << endl;
    return 0;
}