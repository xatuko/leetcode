#include <iostream>
#include "solution.h"

int main(int,char**) {
	Solution s;
	std::vector<int> test = {5,6,4,4,6,9,4,4,7,4,4,8,2,6,8,1,5,9,6};//,5,2,7,9,7,9,6,9,4,1,6,8,8,4,4,2,0,3,8,5};

	std::cout << s.jump(test) << std::endl;
}