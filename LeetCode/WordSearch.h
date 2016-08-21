#pragma once

#include <vector>
#include <string>

class Solution {
public:
	static bool exist(std::vector<std::vector<char>> board, std::string word) {
		int m = board.size();
		int n = board[0].size();
		for (int i = 0;i < m;++i)
			for (int j = 0;j < n;++j)
				if (exist(board, word.c_str(), i, j))
					return true;
		return false;
	}
private:
	static bool exist(std::vector<std::vector<char>> &board, const char *w, int x, int y) {
		if (x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || board[x][y] == '\0' || board[x][y] != *w)
			return false;

		if (*(w + 1) == '\0')
			return true;

		board[x][y] = '\0';
		if (exist(board, w + 1, x + 1, y) || exist(board, w + 1, x - 1, y)
			|| exist(board, w + 1, x, y + 1) || exist(board, w + 1, x, y - 1))
			return true;
		board[x][y] = *w;
		return false;
	}
};
