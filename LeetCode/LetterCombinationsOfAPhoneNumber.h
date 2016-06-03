#pragma once

/*
 * Apply the FIFO queue
 */

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	static vector<string> letterCombinations(string digits) {
		vector<string> ans(1, "");
		string ary[10] = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
		vector<string> mapping = { ary, end(ary) };

		for (int i = 0; i < digits.size(); i++) {
			int num = digits[i] - '0';
			while (ans[0].size() <= i) {
				string t = ans[0];
				ans.erase(ans.begin());
				for (char c: mapping[num]) 
					ans.push_back(t + c);
			}
		}
		return ans;
	}
};
