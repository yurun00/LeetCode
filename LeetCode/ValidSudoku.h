#pragma once

#include <vector>

class Solution {
public:
	static bool isValidSudoku(std::vector<std::vector<char>>& board) {
		int rUsed[9][9] = { 0 }, cUsed[9][9] = { 0 }, sUsed[9][9] = { 0 };
		for(int i = 0; i < 9;++i)
			for (int j = 0; j < 9;++j) {
				if (board[i][j] != '.') {
					int num = board[i][j] - '1', s = i / 3 * 3 + j / 3;
					if (rUsed[i][num] || cUsed[j][num] || sUsed[s][num])
						return false;
					rUsed[i][num] = cUsed[j][num] = sUsed[s][num] = 1;
				}
			}
		return true;
	}
};