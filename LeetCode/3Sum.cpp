/*
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0
Find all unique triplets in the array which gives the sum of zero.
Note:
Elements in a triplet (a,b,c) must be in non-descending order. (ie, a <= b <= c)
The solution set must not contain duplicate triplets.
---------- ----------
For example, given array S = {-1 0 1 2 -1 -4},
A solution set is:
(-1, 0, 1)
(-1, -1, 2)
*/

/*#include <iostream>
#include "3Sum.h"
using namespace std;

int main() {
	int ary[6] = { -1, 0, 1, 2, -1, -4 };
	vector<int> vi(ary, ary + sizeof(ary) / sizeof(int));
	vector<vector<int>> ans = Solution::threeSum(vi);
	vector<vector<int>>::iterator itr = ans.begin();
	for (; itr != ans.end(); ++itr) {
		vector<int>::iterator itrIn = itr->begin();
		cout << "(";
		for (; itrIn != itr->end() - 1; ++itrIn) {
			cout << *itrIn << ", ";
		}
		cout << *itrIn << ")" << endl;
	}
	return 0;
}*/