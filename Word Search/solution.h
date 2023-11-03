#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	bool deWay(vector<vector<char>>& board, string& word, int i, int j, int c)
	{
		if (word[c] != board[i][j]) return false;

		if (c == word.size()-1) return true;

		char tmp = board[i][j];

		board[i][j] = ' ';

		if (i > 0 && board[i-1][j] != ' ' && deWay(board, word, i-1,j,c+1)) return true;
		if (j > 0 && board[i][j-1] != ' ' && deWay(board, word, i,j-1,c+1)) return true;
		if (i < board.size()-1 && board[i+1][j] != ' ' && deWay(board, word, i+1,j,c+1)) return true;
		if (j < board[i].size()-1 && board[i][j+1] != ' ' && deWay(board, word, i,j+1,c+1)) return true;

		board[i][j] = tmp;
		return false;
	}

	bool exist(vector<vector<char>>& board, string word) {
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < board[i].size(); j++)
			{
				if (board[i][j] == word[0] && deWay(board, word, i, j, 0))
					return true;
			}
		}

		return false;
	}
};

#endif // SOLUTION_H