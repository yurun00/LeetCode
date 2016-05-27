#pragma once

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	static int maxArea(vector<int>& height) {
		if (height.size() < 2)
			return 0;

		int mxa = 0, first = 0, last = height.size() - 1;
		while (first < last) {
			mxa = max(mxa, (last - first)*min(height[first], height[last]));

			if (height[first] > height[last])
				last--;
			else
				first++;
		}
		return mxa;
	}
};