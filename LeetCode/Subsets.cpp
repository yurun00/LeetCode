/*
 * Given a set of distinct integers, nums, return all possible subsets.
 * Note: The solution set must not contain duplicate subsets.
 * ---------- ----------
 * For example,
 * If nums = [1, 2, 3], a solution is :
 * [
 *	[3],
 *	[1],
 *	[2],
 *	[1, 2, 3],
 *	[1, 3],
 *	[2, 3],
 *	[1, 2],
 *	[]
 * ]
 */

#include <iostream>
#include "Subsets.h"
using namespace std;

int main() {
	int ary[3] = { 1,2,3 };
	vector<int> ivec(ary, ary + sizeof(ary) / sizeof(int));
	vector<vector<int>> ans = Solution::subsets(ivec);
	for (int i = 0;i < ans.size();++i) {
		for (int j = 0;j < ans[i].size();++j)
			cout << ans[i][j] << '.';
		cout << endl;
	}
	return 0;
}