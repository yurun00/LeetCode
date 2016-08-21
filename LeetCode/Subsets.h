#pragma once

#include <vector>

class Solution {
public:
	static std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
		std::vector<std::vector<int>> ans;
		std::vector<int> append;
		subsets(ans, nums, append);
		return ans;

		/*sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> subs;
        std::vector<int> sub;  
        genSubsets(nums, 0, sub, subs);
        return subs; */
	}
private:
	static void subsets(std::vector<std::vector<int>>& ans, std::vector<int> nums, std::vector<int> append) {
		if (nums.size() == 0) {
			ans.push_back(append);
			return;
		}
		subsets(ans, std::vector<int>(nums.begin(), nums.end() - 1), append);
		append.push_back(nums[nums.size()-1]);
		subsets(ans, std::vector<int>(nums.begin(), nums.end() - 1), append);
	}

	static void genSubsets(std::vector<int>& nums, int start, std::vector<int>& sub, std::vector<std::vector<int>>& subs) {
		subs.push_back(sub);
		for (int i = start; i < nums.size(); i++) {
			sub.push_back(nums[i]);
			genSubsets(nums, i + 1, sub, subs);
			sub.pop_back();
		}

	}
};