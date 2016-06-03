#pragma once

/*
 * Manacher Algorithm
 */

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	static string preprocess(string s) {
		string ss(s.size() * 2 + 2, ' ');
		ss[0] = '^';
		for (unsigned int i = 0; i < s.size(); i++) {
			ss[2 * i + 1] = '#';
			ss[2 * i + 2] = s[i];
		}
		ss[2 * s.size() + 1] = '#';
		return ss;
	}
	static string longestPalindrome(string s) {
		string ss = preprocess(s);
		int p[1000] = { 0 };
		int id = 0, rightMost = 0, mxid = 0, mxLen = 0;
		for (int i = 1; ss[i + 1] != '\0'; i++) {
			if (rightMost > i)
				p[i] = min(p[2 * id - i], rightMost - i);
			else
				p[i] = 1;

			while (ss[i - p[i]] == ss[i + p[i]])
				p[i]++;

			if (rightMost < i + p[i]) {
				id = i;
				rightMost = i + p[i];
			}
			if (p[i] != '#' && mxLen < p[i] - 1) {
				mxLen = p[i] - 1;
				mxid = i;
			}
		}
		return s.substr((mxid - p[mxid]) / 2, mxLen);
	}
};