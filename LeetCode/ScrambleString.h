#pragma once

#include <string>
#include <vector>

class Solution {
public:
	static bool isScramble(std::string s1, std::string s2) {
		if (s1.size() != s2.size())
			return false;
		if (s1.size() == 0 || s1.size() == 1 && s1[0] == s2[0])
			return true;

		std::vector<int> ch(128, 0);
		int len = s1.size();
		for (int i = 0;i < len;++i) {
			++ch[s1[i]];
			--ch[s2[i]];
		}
		for (int i = 0;i < ch.size();++i)
			if (ch[i] != 0)
				return false;

		for (int i = 1;i < len;++i) {
			if (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i)))
				return true;
			if (isScramble(s1.substr(0, i), s2.substr(len - i)) && isScramble(s1.substr(i), s2.substr(0, len - i)))
				return true;
		}

		return false;
	}
};