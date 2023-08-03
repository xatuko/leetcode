#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    vector<int> in {3,4,5,6,7,8};
    for (int i = 0; i < 10; i++)
        cout << "i = " << i << " : " << s.searchInsert(in, i) << endl;
    return 0;
}