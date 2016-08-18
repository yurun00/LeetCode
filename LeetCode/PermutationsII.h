#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
	static std::vector<std::vector<int>> permuteUnique(std::vector<int>& nums) {
		std::vector<std::vector<int>> ans;
		recursion(nums, 0, ans);
		return ans;
	}
private:
	static void recursion(std::vector<int>nums, int begin, std::vector<std::vector<int>>& ans) {
		if (begin >= nums.size()) {
			ans.push_back(nums);
			return;
		}

		for (int i = begin;i < nums.size();++i) {
			if (i != begin && nums[i] == nums[begin]) continue;
			std::swap(nums[begin], nums[i]);
			recursion(nums, begin + 1, ans);
		}
	}
};
