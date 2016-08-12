#pragma once

#include <vector>
using namespace std;

class Solution {
public:
	static int removeDuplicates(vector<int>& nums) {
		if (nums.size() < 2)
			return nums.size();
		vector<int>::iterator cur = nums.begin();
		vector<int>::iterator nxt = cur + 1;
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