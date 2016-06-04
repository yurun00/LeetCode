#pragma once

/*
 * Apply the FIFO queue
 */

#include <vector>
#include <string>

class Solution {
public:
	static std::vector<std::string> letterCombinations(std::string digits) {
		std::vector<std::string> ans(1, "");
		std::string ary[10] = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
		std::vector<std::string> mapping = { ary, end(ary) };

		for (int i = 0; i < digits.size(); i++) {
			int num = digits[i] - '0';
			while (ans[0].size() <= i) {
				std::string t = ans[0];
				ans.erase(ans.begin());
				for (char c: mapping[num]) 
					ans.push_back(t + c);
			}
		}
		return ans;
	}
};
