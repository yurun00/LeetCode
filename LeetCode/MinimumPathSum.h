#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
	static int minPathSum(std::vector<std::vector<int>>& grid) {
		int rowSz = grid.size();
		int colSz = grid[0].size();

		std::vector<int> cur(colSz,0);
		cur[0] = grid[0][0];
		for (int i = 1;i < rowSz;++i)
			cur[i] = cur[i - 1] + grid[i][0];

		for (int j = 1;j < colSz;++j) {
			cur[0] += grid[0][j];
			for (int i = 1;i < rowSz;++i)
				cur[i] = std::min(cur[i - 1], cur[i]) + grid[i][j];
		}

		return cur[rowSz - 1];
	}
};
