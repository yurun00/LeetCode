/*
 * Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.
 * ---------- ----------
 * For example,
 * If n = 4 and k = 2, a solution is :
 * [
 * 	[2, 4],
 * 	[3, 4],
 * 	[2, 3],
 * 	[1, 2],
 * 	[1, 3],
 * 	[1, 4],
 * ]
 */

#include <iostream>
#include "Combinations.h"
using namespace std;

int main() {
	vector<vector<int>> ans = Solution::combine(4, 2);
	for (int i = 0;i < ans.size();++i) {
		for (int j = 0;j < ans[0].size();++j)
			cout << ans[i][j] << '.';
		cout << endl;
	}
	return 0;
}