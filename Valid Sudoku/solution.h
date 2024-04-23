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
				int sub_box = (i / 3) * 3 + (j / 3);
				if (key == '.') continue;

				if (table.find(key) == table.end()) {
					table.emplace(key, std::vector<std::set<int>>{ {i}, { j }, { sub_box } });
				}
				else {
					if (table[key][0].find(i) != table[key][0].end() ||
						table[key][1].find(j) != table[key][1].end() ||
						table[key][2].find(sub_box) != table[key][2].end())
						return false;

					table[key][0].insert(i);
					table[key][1].insert(j);
					table[key][2].insert(sub_box);
				}
			}
		}
		return true;
	}
};

#endif // SOLUTION_H