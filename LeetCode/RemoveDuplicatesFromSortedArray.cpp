/*
 * Given a sorted array, remove the duplicates in place such that each element appear only once 
 * and return the new length.
 * Do not allocate extra space for another array, you must do this in place with constant memory.
 * ---------- ----------
 * For example,
 * Given input array nums = [1,1,2],
 * Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. 
 * It doesn't matter what you leave beyond the new length.
 */

#include <iostream>
#include "RemoveDuplicatesFromSortedArray.h"
using namespace std;

int main() {
	int ary[14] = { 1,1,2,3,3,3,4,5,6,6,6,6,6,7 };
	vector<int> ivec(ary, ary + sizeof(ary) / sizeof(int));
	int sz = Solution::removeDuplicates(ivec);
	cout << "size: " << sz << endl;
	for (vector<int>::iterator it = ivec.begin();it != ivec.end();it++)
		cout << *it << endl;
	return 0;
}