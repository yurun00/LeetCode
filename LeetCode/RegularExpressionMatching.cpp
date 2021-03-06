/*
 * '.' Matches any single character.
 * '*' Matches zero or more of the preceding element.
 *
 * The matching should cover the entire input string (not partial).
 *
 * The function prototype should be:
 * bool isMatch(const char *s, const char *p)
 * ---------- ----------
 * Some examples:
 * isMatch("aa","a") �� false
 * isMatch("aa","aa") �� true
 * isMatch("aaa","aa") �� false
 * isMatch("aa", "a*") �� true
 * isMatch("aa", ".*") �� true
 * isMatch("ab", ".*") �� true
 * isMatch("aab", "c*a*b") �� true
 */

/*#include <iostream>
#include "RegularExpressionMatching.h"
using namespace std;

int main() {
	cout << Solution::isMatch("aa", "a") << endl;
	cout << Solution::isMatch("aa", "aa") << endl;
	cout << Solution::isMatch("aaa", "aa") << endl;
	cout << Solution::isMatch("aa", "a*") << endl;
	cout << Solution::isMatch("aa", ".*") << endl;
	cout << Solution::isMatch("ab", ".*") << endl;
	cout << Solution::isMatch("aab", "c*a*b") << endl;

	cout << Solution::isMatchDP("aa", "a") << endl;
	cout << Solution::isMatchDP("aa", "aa") << endl;
	cout << Solution::isMatchDP("aaa", "aa") << endl;
	cout << Solution::isMatchDP("aa", "a*") << endl;
	cout << Solution::isMatchDP("aa", ".*") << endl;
	cout << Solution::isMatchDP("ab", ".*") << endl;
	cout << Solution::isMatchDP("aab", "c*a*b") << endl;
	return 0;
}*/