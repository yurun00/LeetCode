/*
 * Given a digit string, return all possible letter combinations that the number could represent.
 * A mapping of digit to letters (just like on the telephone buttons) is given below.
 * 
 * 1 --   2 abc  3 def
 * 4 ghi  5 jkl  6 mno
 * 7 pgrs 8 tuv  9 wxyz
 * *      0 --    #
 * ---------- ----------
 * Input:Digit string "23"
 * Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
 *
 * Note: Although the above answer is in lexicographical order, your answer could be in any order you want.
 */

/*#include <iostream>
#include "LetterCombinationsOfAPhoneNumber.h"
using namespace std;

int main() {
	string digits = "023";
	vector<string> ans = Solution::letterCombinations(digits);
	for (int i = 0; i < ans.size();i++)
		cout << ans[i] << endl;
	return 0;
}*/