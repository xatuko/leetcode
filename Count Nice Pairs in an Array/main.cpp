#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<int> nums = {42,11,1,97};

    Solution s;
    cout << s.countNicePairs(nums) << endl;
    return 0;
}