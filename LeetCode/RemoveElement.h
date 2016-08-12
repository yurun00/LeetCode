#pragma once

#include <vector>

class Solution {
public:
	static int removeElement(std::vector<int>& nums, int val) {
		std::vector<int>::iterator cur = nums.begin();
		std::vector<int>::iterator tail = --nums.end();
		int sz = nums.size();
		while (cur != tail) {
			if (*cur == val) {
				*cur = *tail--;
				--sz;
			}
			else
				++cur;
		}
		if (*cur == val)
			--sz;
		nums.resize(sz);
		return sz;
	}
};