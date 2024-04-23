#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>
#include <set>
#include <unordered_map>

using namespace std;

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		std::unordered_map<char, std::vector<std::set<int>>> table;

		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board.size(); j++) {
				char key = board[i][j];
				if (key == '.') continue;

				if (table.find(key) == table.end()) {
					table.emplace(key, std::vector<std::set<int>>(3));
					table[key][0].insert(i);
					table[key][1].insert(j);
					table[key][2].insert((i/3)*3+(j/3));
				}
				else {
					if (table[key][0].find(i) != table[key][0].end())
						return false;
					else table[key][0].insert(i);

					if (table[key][1].find(j) != table[key][1].end())
						return false;
					else table[key][1].insert(j);

					if (table[key][2].find((i/3)*3+(j/3)) != table[key][2].end())
						return false;
					else table[key][2].insert((i / 3)*3 + (j / 3));
				}
			}
		}
		return true;
	}
};

#endif // SOLUTION_H