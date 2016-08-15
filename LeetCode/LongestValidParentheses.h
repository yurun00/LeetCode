#pragma once

#include <string>
#include <stack>

class Solution {
public:
	static int longestValidParentheses(std::string s) {
		int maxLen = 0, curLen = 0;
		if (s.size() < 1)
			return 0;
		std::stack<char> st;
		std::string::iterator is = s.begin();

		while (is != s.end()) {
			if (*is == '(') {
				st.push(*is);
				++curLen;
			}
			else if (*is == ')') {
				if (st.empty()) {
					if (curLen > maxLen)
						maxLen = curLen;
					curLen = 0;
				}
				else if (st.top() == '(') {
					st.pop();
					++curLen;
				}
				else
					return -1;
			}
			else
				return -1;
			++is;
		}

		if(st.empty())
			return maxLen;

		// stack is not empty
		int sz = st.size();
		int cnt = 0;
		std::string::reverse_iterator ris = s.rbegin();
		while (cnt < sz) {
			if (*ris == '(') {
				++cnt;
				*ris = ')';
			}
			else if (*ris == ')') {
				--cnt;
				*ris = '(';
			}
			++ris;
		}
		int tmp = longestValidParentheses(std::string(s.rbegin(), ris));
		return maxLen > tmp ? maxLen : tmp;
	}
};