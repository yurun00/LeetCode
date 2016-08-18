/* 
 * Given a collection of numbers that might contain duplicates, return all possible unique permutations.
 * ---------- ----------
 * For example,
 * [1, 1, 2] have the following unique permutations :
 * [
 * 	[1, 1, 2],
 *	[1, 2, 1],
 *	[2, 1, 1]
 * ]
 */

#include <iostream>
#include "PermutationsII.h"
using namespace std;

int main() {
	int ary[3] = { 1,1,2 };
	vector<int> ivec(ary, ary + sizeof(ary) / sizeof(int));
	vector<vector<int>> ans = Solution::permuteUnique(ivec);
	for (int i = 0;i < ans.size();++i) {
		for (int j = 0;j < ans[i].size();++j)
			cout << ans[i][j] << '.';
		cout << endl;
	}
	return 0;
}