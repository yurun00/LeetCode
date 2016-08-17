#pragma once

#include <vector>
#include <queue>
#include <algorithm>

class Solution {
public:
	static int jump(std::vector<int>& nums) {
		if (nums.size() < 2)
			return 0;
		std::queue<int> q;
		q.push(0);
		int lvl = 0, cnt = 0;
		while (1) {
			// nodes number on this level
			cnt = q.size();
			// pop each nodes on current level, push nodes on next level
			for (int i = 0;i < cnt;++i) {
				int idx = q.front();
				if (idx == nums.size() - 1)
					return lvl;
				q.pop();
				for (int j = 1;j <= nums[idx];++j) 
					q.push(idx + j);
			}
			++lvl;
		}
	}
};
