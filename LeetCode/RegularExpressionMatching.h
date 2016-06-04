#pragma once

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
	static bool isMatch(std::string s, std::string p) {
		if (p.empty()) 
			return s.empty();

		if (p[0] == '*')
			return false;

		if (p[1] == '*')
			return isMatch(s, p.substr(2)) || !s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p);
		else
			return !s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1));
	}

	static bool isMatchDP(std::string s, std::string p) {

		/*
		 * m[i][j]: if s[0,...,i-1] matches p[0,...,j-1];
		 * if p[j-1] != '*'
		 *	 m[i][j] = (s[i-1] == p[j-1] || p[j-1] == '.') && m[i-1][j-1];
		 * else, p[j-1] == '*'
		 *	 m[i][j] = m[i][j-2], if p[j-2] repeats 0 times
		 *	 || (s[i-1] == p[j-2] || p[j-2] == '.') && m[i-1][j], if p[j-2] repeats > 0 times
		 */
		if (p[0] == '*')
			return false;

		int len1 = s.length(), len2 = p.length();
		std::vector<std::vector<bool>> m(len1 + 1, std::vector<bool>(len2 + 1, false));

		m[0][0] = true;

		m[0][1] = false;
		for (int i = 2;i <= len2;i++)
			m[0][i] = m[0][i - 2] && p[i - 1] == '*';

		for (int i = 1;i <= len1;i++)
			m[i][0] = false;

		for (int i = 1;i <= len1;i++) 
			for (int j = 1;j <= len2;j++) {
				if (p[j - 1] != '*')
					m[i][j] = (s[i - 1] == p[j - 1] || p[j - 1] == '.') && m[i - 1][j - 1];
				else
					m[i][j] = m[i][j - 2] || (s[i - 1] == p[j - 2] || p[j - 2] == '.') && m[i - 1][j];
			}

		return m[len1][len2];
	}
};

