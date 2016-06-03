#include <iostream>
#include "LetterCombinationsOfAPhoneNumber.h"
using namespace std;

int main() {
	string digits = "023";
	vector<string> ans = Solution::letterCombinations(digits);
	for (int i = 0; i < ans.size();i++)
		cout << ans[i] << endl;
	return 0;
}