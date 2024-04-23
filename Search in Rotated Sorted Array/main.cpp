#include <iostream>
#include "solution.h"

int main(int,char**) {
	std::vector<int> test = { 4,5,6,7,8,1,2,3 };
	Solution s;

	std::cout << s.search(test, 2) << std::endl;

}