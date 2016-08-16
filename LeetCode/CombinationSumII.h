#pragma once

// DP

#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
	static std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
		std::vector<std::vector<std::vector<std::vector<int>>>>
			targetCombinations(candidates.size(),
				std::vector<std::vector<std::vector<int>>>(target + 1, std::vector<std::vector<int>>()));

		if(candidates[0] <= target)
			targetCombinations[0][candidates[0]].push_back(std::vector<int>(1, candidates[0]));

		for (int c = 1;c < candidates.size();++c)
			for (int t = 1;t <= target;++t) {
				std::vector<std::vector<int>> tmp = targetCombinations[c - 1][t];
				targetCombinations[c][t].insert(targetCombinations[c][t].end(), tmp.begin(), tmp.end());

				if (candidates[c] == t) {
					targetCombinations[c][t].insert(targetCombinations[c][t].end(), std::vector<int>(1, candidates[c]));
					continue;
				}
				if (candidates[c] < t) {
					tmp = targetCombinations[c - 1][t - candidates[c]];
					for (int i = 0;i < tmp.size();++i)
						tmp[i].push_back(candidates[c]);
					targetCombinations[c][t].insert(targetCombinations[c][t].end(), tmp.begin(), tmp.end());
				}
			}

		std::vector<std::vector<int>> ansvec = targetCombinations[candidates.size() - 1][target];
		for (int i = 0; i < ansvec.size(); ++i)
			std::sort(ansvec[i].begin(), ansvec[i].end());
		std::set<std::vector<int>> ansset(ansvec.begin(), ansvec.end());
		return std::vector<std::vector<int>>(ansset.begin(), ansset.end());
	}
	/*static std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
		std::vector<std::vector<std::vector<std::vector<int>>>>
			targetCombinations(candidates.size(),
				std::vector<std::vector<std::vector<int>>>(target + 1, std::vector<std::vector<int>>()));
		for (int i = 0;i < candidates.size();++i) 
			targetCombinations[i][0].push_back(std::vector<int>());
		for (int i = 1;i <= target;++i)
			if (i == candidates[0]) {
				targetCombinations[0][i].push_back(std::vector<int>(1, i));
			}
			else
				targetCombinations[0][i].push_back(std::vector<int>());

		for (int c = 1;c < candidates.size();++c)
			for (int t = 1;t <= target;++t) {
				std::vector<std::vector<int>> tmp = targetCombinations[c - 1][t];
				targetCombinations[c][t].insert(targetCombinations[c][t].end(), tmp.begin(), tmp.end());

				if (candidates[c] == t) {
					targetCombinations[c][t].insert(targetCombinations[c][t].end(), std::vector<int>(1, t));
					continue;
				}
				if (candidates[c] > t)
					continue;
				tmp = targetCombinations[c - 1][t - candidates[c]];
				if (tmp.size() > 1) {
					for (int i = 1;i < tmp.size();++i)
						tmp[i].push_back(candidates[c]);
					targetCombinations[c][t].insert(targetCombinations[c][t].end(), tmp.begin() + 1, tmp.end());
				}
			}

		std::vector<std::vector<int>> ansvec = targetCombinations[candidates.size()-1][target];
		for (int i = 0; i < ansvec.size(); ++i)
			std::sort(ansvec[i].begin(), ansvec[i].end());
		std::set<std::vector<int>> ansset(ansvec.begin()+1, ansvec.end());
		return std::vector<std::vector<int>>(ansset.begin(), ansset.end());
	}*/
};
