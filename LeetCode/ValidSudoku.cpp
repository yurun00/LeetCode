/*
 * Determine if a Sudoku is valid, according to : http://sudoku.com.au/TheRules.aspx
 * The Sudoku board could be partially filled, where empty cells are filled with the character '.'.
 * ---------- ----------
 * A partially filled sudoku which is valid:
 * 5 3 . . 7 . . . .
 * 6 . . 1 9 5 . . .
 * . 9 8 . . . . 6 .
 * 8 . . . 6 . . . 3
 * 4 . . 8 . 3 . . 1
 * 7 . . . 2 . . . 6
 * . 6 . . . . 2 8 .
 * . . . 4 1 9 . . 5
 * . . . . 8 . . 7 9
 * Note:
 * A valid Sudoku board (partially filled) is not necessarily solvable. Only the filled cells need to be validated.
 */

/*#include <iostream>
#include "ValidSudoku.h"
using namespace std;

int main() {
	vector<vector<char>> board(9, vector<char>(9, '.'));
	board[0][0] = '5';board[0][1] = '3';board[0][4] = '7';
	board[1][0] = '6';board[1][3] = '1';board[1][4] = '9';board[1][5] = '5';
	board[2][1] = '9';board[2][2] = '8';board[2][7] = '6';
	board[3][0] = '8';board[3][4] = '6';board[3][8] = '3';
	board[4][0] = '4';board[4][3] = '8';board[4][5] = '3';board[4][8] = '1';
	board[5][0] = '7';board[5][4] = '2';board[5][8] = '6';
	board[6][1] = '6';board[6][6] = '2';board[6][7] = '8';
	board[7][3] = '4';board[7][4] = '1';board[7][5] = '9';board[7][8] = '5';
	board[8][4] = '8';board[8][7] = '7';board[8][8] = '9';
	cout << Solution::isValidSudoku(board) << endl;
	return 0;
}*/