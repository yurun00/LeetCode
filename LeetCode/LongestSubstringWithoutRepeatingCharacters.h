#pragma once

/*
Dynamic Programming solution:
Given a string S, find the length of the longest substring without repeating characters(LSWRC).
Define array CL and V, where CL[i] represents the length of LSWRC ending with S[i](for i = 0:S.size()-1)
while V[size_t(c)] represents the last appearance position of the charactor c in S in each loop.
We have:
|-	CL[i+1] = CL[i] + 1,	if S[i+1] does not equal to any charactor in S.substring(0,i),
|							or the last charactor that equals to S[i+1] in S.substring(0,i)
-|							shows before the LSWRC ending with S[i].
|
|-	CL[i+1] = i + 1 - V[i+1],	else.
Then our return value equals to CL.maxValue().
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	static int lengthOfLongestSubstring(string s) {
		if (s.size() < 2)
			return s.size();
		int curLen = 0;
		int maxLen = 0;
		vector<int> visit(256, -1);
		for (int i = 0; i < int(s.size()) - 1; i++) {
			if (visit[s[i]] == -1) {
				curLen++;
			}
			else {
				curLen = min(curLen + 1, i - visit[s[i]]);
			}
			visit[s[i]] = i;
			maxLen = max(curLen, maxLen);
		}
		return maxLen;
	}
};
