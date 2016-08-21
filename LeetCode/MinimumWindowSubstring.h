#pragma once

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
	static std::string minWindow(std::string s, std::string t) {
		std::vector<int> map(128, 0);
		std::vector<int> curMap(128, 0);
		for (char c : t) map[c]++;
		int left = 0, right = 0, cnt = 0, minlen = 0;
		while (right < s.size()) {
			// current chararator exists in t
			if (map[s[right]] > 0) {
				// redundant charactor
				if (curMap[s[right]] >= map[s[right]]) 
					while (curMap[s[right]] == map[s[right]] || map[s[left]] == 0) {
						if (curMap[s[left]] > 0) {
							--curMap[s[left]];
							--cnt;
						}
						++left;
					}
				++curMap[s[right]];
				++cnt; 
				if (cnt == t.size())
					minlen = std::min(minlen, right - left + 1);
			}
			++right;
		}
		return s.substr(left, right - left + 1);
	}
};
