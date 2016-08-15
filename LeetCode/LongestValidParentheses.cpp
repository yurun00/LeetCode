/*
 * Given a string containing just the characters '(' and ')', find the length of the longest valid(well - formed) 
 * parentheses substring.
 * ---------- ----------
 * For "(()", the longest valid parentheses substring is "()", which has length = 2.
 * Another example is ")()())", where the longest valid parentheses substring is "()()", which has length = 4.
 */

#include <iostream>
#include "LongestValidParentheses.h"
using namespace std;

int main() {
	string s1("(()");
	string s2(")()())");
	string s3("))(()()))())((()"); //6
	cout << Solution::longestValidParentheses(s1) << endl;
	cout << Solution::longestValidParentheses(s2) << endl;
	cout << Solution::longestValidParentheses(s3) << endl;
	return 0;
}



