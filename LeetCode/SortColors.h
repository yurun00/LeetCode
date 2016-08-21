#pragma once

#include <vector>

class Solution {
public:
	static void sortColors(std::vector<int>& nums) {
		int ed0 = -1, ed1 = -1, ed2 = -1;
		for (int i = 0;i < nums.size();++i) {
			if (nums[i] == 0) {
				nums[++ed2] = 2;
				nums[++ed1] = 1;
				nums[++ed0] = 0;
			}
			else if (nums[i] == 1) {
				nums[++ed2] = 2;
				nums[++ed1] = 1;
			}
			else
				++ed2;

		}
	}
};