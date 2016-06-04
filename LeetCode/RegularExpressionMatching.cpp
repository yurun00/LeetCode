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
 * isMatch("aa","a") ¡ú false
 * isMatch("aa","aa") ¡ú true
 * isMatch("aaa","aa") ¡ú false
 * isMatch("aa", "a*") ¡ú true
 * isMatch("aa", ".*") ¡ú true
 * isMatch("ab", ".*") ¡ú true
 * isMatch("aab", "c*a*b") ¡ú true
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