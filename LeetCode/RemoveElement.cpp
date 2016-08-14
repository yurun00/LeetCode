/*
 * Given an array and a value, remove all instances of that value in place and return the new length.
 * Do not allocate extra space for another array, you must do this in place with constant memory.
 * The order of elements can be changed.It doesn't matter what you leave beyond the new length.
 * ---------- ----------
 * Example:
 * Given input array nums = [3, 2, 2, 3], val = 3
 * Your function should return length = 2, with the first two elements of nums being 2.
 */

/*#include <iostream>
#include "RemoveElement.h"
using namespace std;

int main() {
	int ary[9] = {3,2,2,3,4,4,3,5,3};
	vector<int> ivec(ary, ary + sizeof(ary) / sizeof(int));
	int sz = Solution::removeElement(ivec,3);
	cout << "size: " << sz << endl;
	for (vector<int>::iterator it = ivec.begin();it != ivec.end();it++)
		cout << *it << endl;
	return 0;
}*/