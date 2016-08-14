/*
 * You are given a string, s, and a list of words, words, that are all of the same length.
 * Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once 
 * and without any intervening characters.
 * ---------- ----------
 * For example, given:
 * s: "barfoothefoobarman"
 * words : ["foo", "bar"]
 * You should return the indices : [0, 9].
 * (order does not matter).
 */

/*#include <iostream>
#include "SubstringWithConcatenationOfAllWords.h"
using namespace std;

int main() {
	string s = "barfoothefoobarman";
	string ary[2] = { "foo", "bar" };
	vector<string> words(ary, ary + sizeof(ary) / sizeof(string));
	vector<int> ivec = Solution::findSubstring(s, words);
	for (vector<int>::iterator it = ivec.begin();it != ivec.end();it++)
		cout << *it << endl;
	return 0;
}*/