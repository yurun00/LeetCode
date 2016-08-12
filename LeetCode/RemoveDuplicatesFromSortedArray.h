#pragma once

#include <vector>

class Solution {
public:
	static int removeDuplicates(std::vector<int>& nums) {
		if (nums.size() < 2)
			return nums.size();
		std::vector<int>::iterator cur = nums.begin();
		std::vector<int>::iterator nxt = cur + 1;
		int sz = 1;
		while (nxt != nums.end()) {
			if (*cur != *nxt) {
				*++cur = *nxt;
				sz++;
			}
			++nxt;
		}
		nums.resize(sz);
		return sz;
	}
};