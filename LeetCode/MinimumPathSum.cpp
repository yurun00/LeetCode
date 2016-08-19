/*
 * Given a m x n grid filled with non - negative numbers, 
 * find a path from top left to bottom right which minimizes the sum of all numbers along its path.
 * Note: You can only move either down or right at any point in time.
 */

#include <iostream>
#include "MinimumPathSum.h"
using namespace std;

int main() {
	/*
	 2 8 4 9
	 1 7 9 3
	 4 6 2 1

	 16
	 */
	int ary[3][4] = { 2,8,4,9,1,7,9,3,4,6,2,1 };
	vector<vector<int>> grid(3, vector<int>(4, 0));
	for (int i = 0;i < grid.size();++i)
		for (int j = 0;j < grid[0].size();++j)
			grid[i][j] = ary[i][j];
	cout << Solution::minPathSum(grid) << endl;
	return 0;
}