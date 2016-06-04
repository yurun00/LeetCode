#pragma once

#include <vector>
#include <string>
#include <stack>

class Solution{
public:
	/*
	 * The recursive version
	 */
	static std::vector<std::string> generateParentheses(int n) {
		std::vector<std::string> ans;
		if (n > 0)
			generateParenthesis(ans, "", n, 0);
		return ans;
	}
	static void generateParenthesis(std::vector<std::string>& ans, std::string str, int left, int right) {
		if (left == 0 && right == 0) {
			ans.push_back(str);
			return;
		}
		if (left > 0)
			generateParenthesis(ans, str + "(", left - 1, right + 1);
		if (right > 0)
			generateParenthesis(ans, str + ")", left, right - 1);
	}
	/*
	 * The stack version 
	 */
	static std::vector<std::string> generateParenthesesStack(int n) {
		std::vector<std::string> ans;
		if (n < 1)
			return ans;
		std::stack<std::string> parenthesesStack;
		std::stack<int> validationStack;
		parenthesesStack.push("(");
		validationStack.push(0); // store number of right parenthesis
		while (parenthesesStack.size() != 0) {
			std::string str = parenthesesStack.top();
			parenthesesStack.pop();
			int v = validationStack.top();
			validationStack.pop();
			if (str.size() == 2 * n) {
				ans.push_back(str);
				continue;
			}
			if (str.size() - v < n) {
				parenthesesStack.push(str + "(");
				validationStack.push(v);
			}
			if (str.size() - v > v) {
				parenthesesStack.push(str + ")");
				validationStack.push(v+1);
			}
		}
		return ans;
	}
};
