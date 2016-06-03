#pragma once

/*
 * Given two sorted arrays nums1 and nums2 of size m and n respectively, we need to find the median of the two sorted arrays.
 * The overall run time complexity should be O(log (m+n)).
 * First find the medians of the two sorted arrays respectively named med1 and med2. Then compare these two numbers, WLOG,
 * presuming that med1 > med2. Then any number following med1 in nums1 and ahead of med2 in nums2 is not possible to be the
 * median of the two arrays. Compare the lengths of these two half arrays and store the shorter one in variable cutLen. The
 * two arrays should be cut the length of cutLen from the begin of array nums1 and the end of array nums2. As follows:
 *
 * -----------------|-------|->The sub-array does not contain the median.
 * nums1: |-----------------|
 * ----------------|->med1
 * (med1 > med2)
 * -------|--|->The sub-array does not contain the median and is equal to length of cutLen.
 * nums2: |-------|
 * -----------|->med2
 *
 * Then cut the two arrays:
 * ----------------------|--|->cutLen
 * nums1: |--------------|
 * ----------------|->med1
 * -------|--|->cutLen
 * nums2:    |----|
 * -----------|->med2
 * Then do the same thing to nums1 and nums2 until the recursion end. In the case above, nums2 is always the array to be cut.
 * The overall run time complexity is O(log (min (m, n)));
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	static double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int s1 = nums1.size();
		int s2 = nums2.size();
		double med1 = (s1 % 2 == 0) ? (double)(nums1[s1 / 2 - 1] + nums1[s1 / 2]) / 2 : nums1[s1 / 2];
		double med2 = (s2 % 2 == 0) ? (double)(nums2[s2 / 2 - 1] + nums2[s2 / 2]) / 2 : nums2[s2 / 2];
		// Consider empty vectors
		if (s1 == 0 && s2 == 0)
			exit(0);
		if (s1 == 0)
			return med2;
		if (s2 == 0)
			return med1;
		// Consider vector with size of 1
		if (s1 == 1 && s2 == 1)
			return (double)(med1 + med2) / 2;
		else if (s1 == 1 || s2 == 1) {
			// To make sure nums1 is the longer vector
			if (s1 < s2)
				return findMedianSortedArrays(nums2, nums1);
			//s1 > 1 && s2 == 1
			if (s1 % 2 == 0) {	// Size of longer vector is an even number 
				if (med2 < nums1[s1 / 2 - 1])
					return nums1[s1 / 2 - 1];
				else if (med2 >= nums1[s1 / 2 - 1] && med2 < nums1[s1 / 2])
					return med2;
				else
					return nums1[1 / 2];
			}
			else {				// Size of longer vector is an odd number 
				if (med2 < nums1[s1 / 2 - 1])
					return (double)(nums1[s1 / 2 - 1] + nums1[s1 / 2]) / 2;
				else if (med2 >= nums1[s1 / 2 - 1] && med2 < nums1[s1 / 2 + 1])
					return (double)(med2 + nums1[s1 / 2]) / 2;
				else
					return (double)(nums1[1 / 2] + nums1[s1 / 2 + 1]) / 2;
			}
		}
		else { // Both of the sizes are greater than 1
			int cutLen = min(s1 / 2, s2 / 2);
			vector<int>::iterator it1e, it1s, it2e, it2s;
			if (med1 >= med2) {
				it1s = nums1.begin();
				it1e = nums1.end() - cutLen;
				vector<int> subNums1(it1s, it1e);
				it2s = nums2.begin() + cutLen;
				it2e = nums2.end();
				vector<int> subNums2(it2s, it2e);
				return findMedianSortedArrays(subNums1, subNums2);
			}
			else {
				it1s = nums1.begin() + cutLen;
				it1e = nums1.end();
				vector<int> subNums1(it1s, it1e);
				it2s = nums2.begin();
				it2e = nums2.end() - cutLen;
				vector<int> subNums2(it2s, it2e);
				return findMedianSortedArrays(subNums1, subNums2);
			}
		}
	}
};
