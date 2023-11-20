#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    vector<string> garbage = {"G", "P", "GP", "GG"};
    vector<int> travel = {2,4,3};
    cout << s.garbageCollection(garbage,travel) << endl;

    return 0;
}