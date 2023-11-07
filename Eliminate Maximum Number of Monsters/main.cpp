#include <iostream>
#include "solution.h"

int main(int,char**)
{
    Solution s;
    vector<int> dist = { 1,1,2,3 };
    vector<int> speed = { 1,1,1,1 };


    s.eliminateMaximum(dist,speed);
    return 0;
}