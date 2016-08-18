#pragma once
/*
 * Using flag vector as bitmask
 */

#include <vector>
#include <string>

class Solution {
public:
	static std::vector<std::vector<std::string>> solveNQueens(int n) {
		std::vector<std::vector<std::string>> ans;
		std::vector<std::string> nQueens(n, std::string(n, '.'));
		std::vector<int> col(n, 1);
		std::vector<int> dgr45(2 * n - 1, 1);
		std::vector<int> dgr135(2 * n - 1, 1);
		solveNQueens(ans, nQueens, col, dgr45, dgr135, 0, n);
		return ans;
	}
private:
	static void solveNQueens(std::vector<std::vector<std::string>> &ans, std::vector<std::string> &nQueens, 
		std::vector<int> &col, std::vector<int> &dgr45, std::vector<int> &dgr135, int row, int n) {
		if (row == n) {
			ans.push_back(nQueens);
			return;
		}
		for (int i = 0;i < n;++i) {
			if (col[i] && dgr45[row + i] && dgr135[row - i + n - 1]) {
				col[i] = dgr45[row + i] = dgr135[row - i + n - 1] = 0;
				nQueens[row][i] = 'Q';
				solveNQueens(ans, nQueens, col, dgr45, dgr135, row+1, n);
				col[i] = dgr45[row + i] = dgr135[row - i + n - 1] = 1;
				nQueens[row][i] = '.';
			}
		}
	}
};