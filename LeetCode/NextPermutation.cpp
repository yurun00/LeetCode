/*
 * Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
 * If such arrangement is not possible, it must rearrange it as the lowest possible order(ie, sorted in ascending order).
 * The replacement must be in - place, do not allocate extra memory.
 * and without any intervening characters.
 * ---------- ----------
 * Here are some examples.
 * Inputs are in the left - hand column and its corresponding outputs are in the right - hand column.
 * 1, 2, 3 ¡ú 1, 3, 2
 * 3, 2, 1 ¡ú 1, 2, 3
 * 1, 1, 5 ¡ú 1, 5, 1
 */

#include <iostream>
#include "NextPermutation.h"
using namespace std;

int main() {
	/*int ary1[3] = { 1,2,3 };
	int ary2[3] = { 3,2,1 };
	int ary3[3] = { 1,1,5 };*/
	int ary1[3] = { 1,2,1 };
	int ary2[3] = { 1,3,2 };
	int ary3[3] = { 2,3,1 };
	vector<int> ivec1(ary1, ary1 + sizeof(ary1) / sizeof(int));
	vector<int> ivec2(ary2, ary2 + sizeof(ary2) / sizeof(int));
	vector<int> ivec3(ary3, ary3 + sizeof(ary3) / sizeof(int));
	Solution::nextPermutation(ivec1);
	Solution::nextPermutation(ivec2);
	Solution::nextPermutation(ivec3);
	for (vector<int>::iterator it = ivec1.begin();it != ivec1.end();it++)
		cout << *it << ". ";
	cout << endl;
	for (vector<int>::iterator it = ivec2.begin();it != ivec2.end();it++)
		cout << *it << ". ";
	cout << endl;
	for (vector<int>::iterator it = ivec3.begin();it != ivec3.end();it++)
		cout << *it << ". ";
	cout << endl;
	return 0;
}





