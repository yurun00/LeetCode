/*
 * The n-queens puzzle is the problem of placing n queens on an n¡Án chessboard such that no two queens attack each other.
 * Given an integer n, return all distinct solutions to the n-queens puzzle.
 * Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space respectively.
 * ---------- ----------
 * For example,
 * There exist two distinct solutions to the 4-queens puzzle:
 * [
 *  [".Q..",  // Solution 1
 *   "...Q",
 *   "Q...",
 *   "..Q."],

 *  ["..Q.",  // Solution 2
 *   "Q...",
 *   "...Q",
 *   ".Q.."]
 * ]
 */

/*#include <iostream>
#include "NQueens.h"
using namespace std;

int main() {
	vector<vector<string>> ans = Solution::solveNQueens(4);
	for (int i = 0;i < ans.size();++i) {
		for (int j = 0;j < ans[i].size();++j)
			cout << ans[i][j] << endl;
		cout << endl;
	}
	return 0;
}*/