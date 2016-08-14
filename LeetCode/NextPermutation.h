#pragma once

#include <vector>

class Solution {
public:
	static void nextPermutation(std::vector<int>& nums) {
		if (nums.size() < 2)
			return;

		std::vector<int>::reverse_iterator rit = nums.rbegin();
		while (rit != nums.rend()) {
			std::vector<int>::reverse_iterator rpre = rit;
			std::vector<int>::reverse_iterator rnxt = rit + 1;
			if (rnxt == nums.rend())
				break;

			// find the last element X greater than its precursor
			if (*rnxt < *rit) {
				// swap the precursor of X with right succeeds and reverse all the succeeds of X
				while (rpre != nums.rbegin() && *rnxt < *(rpre-1))
					--rpre;
				int tmp = *rpre;
				*rpre = *rnxt;
				*rnxt =tmp;
				break;
			}
			++rit;
		}
		// reverse all elements from rbegin to rit
		std::vector<int>::reverse_iterator rit0 = nums.rbegin();
		while (rit0 < rit) {
			int tmp = *rit0;
			*rit0 = *rit;
			*rit = tmp;
			++rit0;
			--rit;
		}
		return;
	}
};
