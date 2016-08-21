#pragma once

/*
 * Define step[i][j] to be the minimum number of steps to convert word1[0..i - 1] to word2[0..j - 1]
 * Boundary Cases: steps[i][0] = i, steps[0][j] = j.
 * steps[i][j]	= steps[i - 1][j - 1],		if word1[i] == word2[j].
				= steps[i - 1][j - 1] + 1,	else if replace the last charactor of word1.
				  steps[i - 1][j] + 1,	else if delete the last charactor of word1.
				  steps[i][j - 1] + 1,	else if insert the last charactor of word2 to the end of word1.
 * Each time steps[i][j] is updated, only steps[i - 1][j - 1], steps[i][j - 1], steps[i - 1][j]. 
 * The full m*n matrix is not needed. Maintaing one column is enough.
 */

#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
	static int minDistance(std::string word1, std::string word2) {
		std::vector<int> steps(word1.size() + 1, 0);
		int left_up = 0;
		for (int i = 1;i < word1.size() + 1;++i)
			steps[i] = 1;

		for (int j = 1;j < word2.size() + 1;++j) {
			left_up = steps[0];
			steps[0] = j;
			for (int i = 1;i < word1.size() + 1;++i) {
				int tmp = steps[i];
				if (word1[i] != word2[j]) 
					steps[i] = std::min(steps[i - 1], std::min(steps[i], left_up)) + 1;
				else
					steps[i] = left_up;
				left_up = tmp;
			}
		}
		return steps[word1.size()];
	}
};