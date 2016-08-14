#pragma once

#include <vector>
#include <string>
#include <map>

class Solution {
public:
	static std::vector<int> findSubstring(std::string s, std::vector<std::string>& words) {
		std::vector<int> ans;
		int slen = s.size();
		int wsl = words.size();
		if (slen <= 0 || wsl <= 0)
			return ans;

		std::map<std::string, int> dict;
		for (int i = 0;i < wsl;++i)
			++dict[words[i]];
		int wl = words[0].size();

		for (int i = 0;i < wl;++i) {

			// all words in current window
			std::map<std::string, int> tdict;

			// left side of current window, number of words in the window
			int left = i, count = 0;

			for (int j = i;j <= slen - wl;j += wl) {

				// find a valid word
				if (dict[s.substr(j, wl)]) {
					std::string ts = s.substr(j, wl);
					++tdict[ts];
					++count;

					// valid but duplicate
					if (tdict[ts] > dict[ts]) {
						std::string ts1;
						while (tdict[ts] > dict[ts]) {
							ts1 = s.substr(left, wl);
							--tdict[ts1];
							left += wl;
							--count;
						}
					}

					if (count == wsl) {
						ans.push_back(left);
						--tdict[s.substr(left, wl)];
						left += wl;
						--count;
					}
				}
				else {
					tdict.clear();
					left = j + wl;
					count = 0;
				}
			}
		}
		return ans;
	}
};
