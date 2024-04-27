#include <iostream>
#include "solution.h"

int main(int,char**) {
	Solution s;
	vector<int> test = {1,2,3};
	auto res = s.permute(test);

	for (auto& v : res) {
		for (auto& el : v) {
			std::cout << el << ' ';
		}
		std::cout << std::endl;
	}
}