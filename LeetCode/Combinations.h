#pragma once

/*
 C(n,k)=C(n-1,k-1)+C(n-1,k)
 */

#include <vector>

class Solution {
public:
	static std::vector<std::vector<int>> combine(int n, int k) {
		std::vector<std::vector<int>> ans;
		combine(ans, n, k, std::vector<int>());
		return ans;
	}
private:
	static void combine(std::vector<std::vector<int>>& ans, int n, int k, std::vector<int> append) {
		if (n == k) {
			std::vector<int> tmp(n, 0);
			for (int i = 0;i < n;++i) tmp[i] = i + 1;
			if (append.size() > 0)
				tmp.insert(tmp.end(), append.begin(), append.end());
			ans.push_back(tmp);
			return;
		}
		if (k == 0) {
			ans.push_back(append);
			return;
		}

		combine(ans, n - 1, k, append);
		append.push_back(n);
		combine(ans, n - 1, k - 1, append);
	}
};