#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
	static std::vector<std::vector<int>> threeSum(std::vector<int>& numSeq) {
		std::vector<std::vector<int>> ans;
		if (numSeq.size() < 3)
			return ans;
		sort(numSeq.begin(), numSeq.end());

		std::vector<int>::iterator itr1 = numSeq.begin();
		std::vector<int>::iterator itr2;
		std::vector<int>::iterator itr3;
		for (; itr1 != numSeq.end() - 2; ++itr1) {
			itr2 = itr1 + 1;
			itr3 = numSeq.end() - 1;
			if (itr1 > numSeq.begin() && *itr1 == *(itr1 - 1))	// Have to consider the duplicate triplets
				continue;
			while (itr2 < itr3) {
				if (itr2 > itr1 + 1 && *itr2 == *(itr2 - 1)) {	// Have to consider the duplicate triplets
					++itr2;
					continue;
				}
				if (itr3 < numSeq.end() - 1 && *itr3 == *(itr3 + 1)) {	// Have to consider the duplicate triplets
					--itr3;
					continue;
				}
				if (*itr1 + *itr2 + *itr3 == 0) {
					std::vector<int> tmp;	// Error if 'vector<int> tmp();'
					tmp.push_back(*itr1);
					tmp.push_back(*itr2);
					tmp.push_back(*itr3);
					ans.push_back(tmp);
					++itr2;
				}
				else if (*itr1 + *itr2 + *itr3 < 0) {
					++itr2;
				}
				else {
					--itr3;
				}
			}
		}
		return ans;
	}
};
