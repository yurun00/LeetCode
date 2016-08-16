#pragma once

// DP

#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
	static std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
		std::vector<std::vector<std::vector<int>>> 
			targetCombinations(target + 1, std::vector<std::vector<int>>());
		targetCombinations[0].push_back(std::vector<int>());

		for(int t = 1;t <= target;++t) 
			for (int c = 0;c < candidates.size();++c) 
				if (candidates[c] <= t) {
					std::vector<std::vector<int>>tmp = targetCombinations[t - candidates[c]];
					for (int i = 0;i < tmp.size();++i)
						tmp[i].push_back(candidates[c]);
					targetCombinations[t].insert(targetCombinations[t].end(), tmp.begin(), tmp.end());
				}
		
		std::vector<std::vector<int>> ansvec = targetCombinations[target];
		for (int i = 0; i < ansvec.size(); ++i)
			std::sort(ansvec[i].begin(), ansvec[i].end());
		std::set<std::vector<int>> ansset(ansvec.begin(), ansvec.end());
		return std::vector<std::vector<int>>(ansset.begin(), ansset.end());
	}
};