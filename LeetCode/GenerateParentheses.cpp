/*
 * Given n pairs of parentheses, write a function to generate all combinations of well - formed parentheses.
 * ---------- ----------
 * For example, given n = 3, a solution set is :
 * "((()))", "(()())", "(())()", "()(())", "()()()"
 */
#include "GenerateParentheses.h"
#include <iostream>
using namespace std;

int main() {
	int n = 3;
	vector<string> v;
	// v = Solution::generateParentheses(n);
	v = Solution::generateParenthesesStack(n);
	for (int i = 0; i < v.size();i++) {
		cout << v[i] << endl;
	}
	return 0;
}