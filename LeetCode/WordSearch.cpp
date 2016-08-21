/*
 * Given a 2D board and a word, find if the word exists in the grid.
 * The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those 
 * horizontally or vertically neighboring.The same letter cell may not be used more than once.
 * ---------- ----------
 * For example,
 * Given board =
 * [
	['A', 'B', 'C', 'E'],
	['S', 'F', 'C', 'S'],
	['A', 'D', 'E', 'E']
 * ]
 * word = "ABCCED", ->returns true,
 * word = "SEE", ->returns true,
 * word = "ABCB", ->returns false.
 */

#include <iostream>
#include "WordSearch.h"
using namespace std;

int main() {
	char ary[3][4] = {	'A', 'B', 'C', 'E',
						'S', 'F', 'C', 'S',
						'A', 'D', 'E', 'E' };
	vector<vector<char>> board(3, vector<char>(4));
	for (int i = 0;i < 3;++i)
		for (int j = 0;j < 4;++j)
			board[i][j] = ary[i][j];
	string word1 = "ABCCED";
	string word2 = "SEE";
	string word3 = "ABCB";
	cout << Solution::exist(board, word1) << endl;
	cout << Solution::exist(board, word2) << endl;
	cout << Solution::exist(board, word3) << endl;
	return 0;
}