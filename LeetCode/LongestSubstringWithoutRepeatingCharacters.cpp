/*
Given a string, find the length of the longest substring without repeating characters.
---------- ----------
For example:
The longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3.
For "bbbbb" the longest substring is "b", with the length of 1.
*/

#include <iostream>
#include "LongestSubstringWithoutRepeatingCharacters.h"
using namespace std;

int main() {
	string str = "abcabcbb";
	cout << Solution::lengthOfLongestSubstring(str) << endl;
	return 0;
}