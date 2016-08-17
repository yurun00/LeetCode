/*
 * Given n non - negative integers representing an elevation map where the width of each bar is 1, 
 * compute how much water it is able to trap after raining.
 * ---------- ----------
 * For example,
 * Given[0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1], return 6.
 *
 * ^
 * |                     __
 * |         __         |  |__    __
 * |   __   |  |[] [] []|  |  |[]|  |__
 * |__|__|[]|__|__|[]|__|__|__|__|__|__|
 */

/*#include <iostream>
#include "TrappingRainWater.h"
using namespace std;

int main() {
	int ary[12] = { 0,1,0,2,1,0,1,3,2,1,2,1 };
	vector<int> ivec(ary, ary + sizeof(ary) / sizeof(int));
	cout << Solution::trap(ivec) << endl;
	return 0;
}*/