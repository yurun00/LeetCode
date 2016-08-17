/*
 * Given a collection of candidate numbers(C) and a target number(T), 
 * find all unique combinations in C where the candidate numbers sums to T.
 * Each number in C may only be used once in the combination.
 * Note:
 * All numbers(including target) will be positive integers.
 * The solution set must not contain duplicate combinations.
 * ---------- ----------
 * For example, given candidate set[10, 1, 2, 7, 6, 1, 5] and target 8,
 * A solution set is :
 * [
 *  [1, 7],
 *  [1, 2, 5],
 *  [2, 6],
 *  [1, 1, 6]
 * ]
 */

/*#include <iostream>
#include "CombinationSumII.h"
using namespace std;

int main() {
	int ary[7] = { 10,1,2,7,6,1,5 };
	vector<int> vec(ary, ary + sizeof(ary) / sizeof(int));
	vector<vector<int>> ans = Solution::combinationSum2(vec, 8);
	for (int i = 0;i < ans.size();++i) {
		for (int j = 0;j < ans[i].size();++j)
			cout << ans[i][j] << '.';
		cout << endl;
	}
	return 0;
}*/