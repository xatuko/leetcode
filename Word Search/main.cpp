#include <iostream>
#include "solution.h"

int main(int,char**)
{
    vector<vector<char>> board = {
                                //   {'A','A','A','A','A','A'},
                                //   {'A','A','A','A','A','A'},
                                //   {'A','A','A','A','A','A'},
                                //   {'A','A','A','A','A','A'},
                                //   {'A','A','A','A','A','A'},
                                //   {'A','A','A','A','A','A'}
                                // {'A','B','C','E'},
                                // {'S','F','C','S'},
                                // {'A','D','E','E'}
                                {'C','A','A'},
                                {'A','A','A'},
                                {'B','C','D'}
                                  };
    string word = "AAB";

    Solution s;
    std::cout << std::boolalpha << s.exist(board,word) << std::endl;
    return 0;
}