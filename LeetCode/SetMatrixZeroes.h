#pragma once

#include <vector>

class Solution {
public:
	static void setZeroes(std::vector<std::vector<int>>& matrix) {
		int col0 = 1;
		for (int i = 0;i < matrix.size();++i)
			if (matrix[i][0] == 0)
				col0 = 0;

		for(int i = 0;i < matrix.size();++i)
			for (int j = 1;j < matrix[0].size();++j) 
				if (matrix[i][j] == 0) 
					matrix[i][0] = matrix[0][j] = 0;
				
		for (int i = matrix.size() - 1;i > -1;--i)
			for (int j = matrix[0].size() - 1;j > 0;--j)
				if (matrix[i][0] == 0 || matrix[0][j] == 0)
					matrix[i][j] = 0;

		if(col0 == 0)
			for (int i = 0;i < matrix.size();++i)
					matrix[i][0] = 0;
	}
};