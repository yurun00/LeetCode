/*
 * Given a set of candidate numbers(C) and a target number(T), 
 * find all unique combinations in C where the candidate numbers sums to T.
 * The same repeated number may be chosen from C unlimited number of times.
 * Note:
 * All numbers(including target) will be positive integers.
 * The solution set must not contain duplicate combinations.
 * ---------- ----------
 * For example, given candidate set[2, 3, 6, 7] and target 7,
 * A solution set is :
 * [
 * 	[7],
 * 	[2, 2, 3]
 * ]
 */

#include <iostream>
#include "CombinationSum.h"
using namespace std;

int main() {
	int ary[4] = { 2,3,6,7 };
	vector<int> vec(ary, ary + sizeof(ary) / sizeof(int));
	vector<vector<int>> ans = Solution::combinationSum(vec, 7);
	for (int i = 0;i < ans.size();++i) {
		for (int j = 0;j < ans[i].size();++j)
			cout << ans[i][j] << '.';
		cout << endl;
	}
	return 0;
}