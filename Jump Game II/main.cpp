#include <iostream>
#include "solution.h"

int main(int,char**) {
	Solution s;
	std::vector<int> test = {10,9,8,7,6,5,4,3,2,1,1,0};

	std::cout << s.jump(test) << std::endl;
}