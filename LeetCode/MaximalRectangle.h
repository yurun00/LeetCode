#pragma once

/*
 * For each i that represents row number, find the largest rectangle containing only 1's whose bottom is the i-th row.
 * Treat the i-th row as the x axis, y[i] represents the largest number of consecutive 1s 
 * on vertical direction whose bottom is x[i], this problem is the same as Largest Rectangle in Histogram.
 *     _
 * _  |1|  _
 * 1| |1|_|1| 
 * 1|_|1|1|1|...
 */

#include <vector>
#include <algorithm>

class Solution {
public:
	static int maximalRectangle(std::vector<std::vector<char>>& matrix) {
		int row = matrix.size();
		int col = matrix[0].size();
		std::vector<int> height(col, 0), left(col, 0), right(col, row);
		int curLeft = 0, curRight = row, maxA = 0;

		for (int i = 0;i < row;++i) {
			curLeft = 0;
			curRight = row;
			for (int j = 0;j < col;++j) 
				if (matrix[i][j] == '1') 
					++height[j];
				else
					height[j] = 0;

			for (int j = 0;j < col;++j) 
				if (matrix[i][j] == '1') 
					left[j] = std::max(curLeft, left[j]);
				else {
					left[j] = -1;
					curLeft = j + 1;
				}

			for (int j = col - 1;j > -1;--j) 
				if (matrix[i][j] == '1') 
					right[j] = std::min(curRight, right[j]);
				else {
					right[j] = col;
					curRight = j - 1;
				}

			for (int j = 0;j < col;++j) {
				if (matrix[i][j] == '1')
					maxA = std::max(maxA, height[j] * (right[j] - left[j] + 1));
			}
		}
		return maxA;
	}
};