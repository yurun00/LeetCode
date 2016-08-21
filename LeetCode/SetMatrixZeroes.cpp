/*
 * Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.
 * Follow up :
 * Did you use extra space ?
 * A straight forward solution using O(mn) space is probably a bad idea.
 * A simple improvement uses O(m + n) space, but still not the best solution.
 * Could you devise a constant space solution ?
 */

#include <iostream>
#include "SetMatrixZeroes.h"
using namespace std;

int main() {
	int ary[3][4] = { 2,8,0,9,8,7,9,3,0,0,2,1 };
	vector<vector<int>> matrix(3, vector<int>(4, 0));
	for (int i = 0;i < matrix.size();++i)
		for (int j = 0;j < matrix[0].size();++j)
			matrix[i][j] = ary[i][j];
	Solution::setZeroes(matrix);
	for (int i = 0;i < matrix.size();++i) {
		for (int j = 0;j < matrix[0].size();++j)
			cout << matrix[i][j] << '.';
		cout << endl;
	}

	return 0;
}