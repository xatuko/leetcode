#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<string> input = {"01", "10"};
    Solution s;
    cout << s.findDifferentBinaryString(input) << endl;

    return 0;
}