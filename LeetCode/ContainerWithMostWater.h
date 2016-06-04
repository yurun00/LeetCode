#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
	static int maxArea(std::vector<int>& height) {
		if (height.size() < 2)
			return 0;

		int mxa = 0, first = 0, last = height.size() - 1;
		while (first < last) {
			mxa = std::max(mxa, (last - first)*std::min(height[first], height[last]));

			if (height[first] > height[last])
				last--;
			else
				first++;
		}
		return mxa;
	}
};