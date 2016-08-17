#pragma once

#include <vector>

class Solution {
public:
	static int firstMissingPositive(std::vector<int>& nums) {
		for (int i = 0;i < nums.size();++i) 
			if (nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[nums[i]-1]) {
				int tmp = nums[nums[i] - 1];
				nums[nums[i] - 1] = nums[i];
				nums[i] = tmp;
				--i;
			}

		int ans;
		for (ans = 0;ans < nums.size();++ans)
			if (nums[ans] != ans + 1)
				return ++ans;
		return ++ans;
	}
};
