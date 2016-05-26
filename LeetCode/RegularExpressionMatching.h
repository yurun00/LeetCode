#pragma once

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	static bool isMatch(string s, string p) {
		if (p.empty()) 
			return s.empty();

		if (p[0] == '*')
			return false;

		if (p[1] == '*')
			return isMatch(s, p.substr(2)) || !s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p);
		else
			return !s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1));
	}
};

