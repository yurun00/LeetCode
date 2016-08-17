#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
	static int trap(std::vector<int>& height) {
		std::vector<int>::iterator max_it = std::max_element(height.begin(), height.end());
		if (max_it == height.begin()) {

		}
		int left = trap(height.begin(), max_it + 1, 1);
		int right = trap(height.end()-1, max_it - 1, -1);
		return left + right;
	}
private:
	// last element is maximum
	static int trap(std::vector<int>::iterator begin, std::vector<int>::iterator end, int dir) {
		int cur_max = 0, max_idx = 0, idx = 0, water = 0, stone = 0;
		while (begin != end) {
			if (*begin >= cur_max) {
				water += cur_max*(idx - max_idx) - stone;
				cur_max = *begin;
				max_idx = idx;
				stone = 0;
			}
			stone += *begin;
			if (dir > 0)
				++begin;
			else
				--begin;
			++idx;
		}
		return water;
	}
};