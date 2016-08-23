/*
* Given a 2D binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.
* ---------- ----------
* For example, given the following matrix :
*
* 1 0 1 0 0
* 1 0 1 1 1
* 1 1 1 1 1
* 1 0 0 1 0
* Return 6.
*/

#include <iostream>
#include "MaximalRectangle.h"
using namespace std;

int main() {
	char ary[4][5] = {	'1', '0', '1', '0', '0' ,
						'1', '0', '1', '1', '1' ,
						'1', '1', '1', '1', '1' ,
						'1', '0', '0', '1', '0' };
	vector<vector<char>> matrix(4, vector<char>(5));
	for (int i = 0;i < 4;++i)
		for (int j = 0;j < 5;++j)
			matrix[i][j] = ary[i][j];
	cout << Solution::maximalRectangle(matrix) << endl;
	return 0;
}