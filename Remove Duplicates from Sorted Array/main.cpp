#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<int> in {1,1};
    Solution s;
    size_t size = s.removeDuplicates(in);
    cout << size << endl;
    for (size_t i = 0; i < size; i++)
        cout << in[i] << ' ';
    cout << endl;
    return 0;
}