#pragma once

/*
 * LLR[i] represents the area of the largest rectangle with height heights[i] ended by i, 
 * RLR[i] represents the area of the largest rectangle with height heights[i] started by i, 
 * Find maximum(LLR[i] + RLR[i])	
 */

/*
 * For every bar ¡®x¡¯, calculate the area with ¡®x¡¯ as the smallest bar in the rectangle.
 * 1) Create an empty stack.
 * 2) Start from first bar, and do following for every bar ¡®hist[i]¡¯ where ¡®i¡¯ varies from 0 to n-1.
 *	a) If stack is empty or hist[i] is higher than the bar at top of stack, then push ¡®i¡¯ to stack.
 *	b) If this bar is smaller than the top of stack, then keep removing the top of stack while top of the stack is greater. 
 *		Let the removed bar be hist[tp]. Calculate area of rectangle with hist[tp] as smallest bar. 
 *		For hist[tp], the ¡®left index¡¯ is previous (previous to tp) item in stack and ¡®right index¡¯ is ¡®i¡¯ (current index).
 * 3) If the stack is not empty, then one by one remove all bars from stack and do step 2.b for every removed bar.
 */

#include <vector>

class Solution {
public:
	static int largestRectangleArea(std::vector<int>& heights) {
		std::vector<int> LLR = std::vector<int>(heights.size()), RLR = std::vector<int>(heights.size());
		int n = heights.size();
		// calculate LLR
		LLR[0] = heights[0];
		for (int i = 1;i < n;++i) {
			if (heights[i] > heights[i - 1])
				LLR[i] = heights[i];
			else {
				int j = i - 1;
				while (j > -1 && heights[j] >= heights[i]) 
					j -= LLR[j] / heights[j];
				LLR[i] = (i - j)*heights[i];
			}
		}

		// calculate RLR
		RLR[n - 1] = heights[n - 1];
		for (int i = n - 2;i > -1;--i) {
			if (heights[i] > heights[i + 1])
				RLR[i] = heights[i];
			else {
				int j = i + 1;
				while (j < n && heights[j] >= heights[i])
					j += RLR[j] / heights[j];
				RLR[i] = (j - i)*heights[i];
			}
		}

		int maxRect = 0;
		for (int i = 0;i < n;++i) {
			int rect = LLR[i] + RLR[i] - heights[i];
			maxRect = (rect > maxRect) ? rect : maxRect;
		}
		return maxRect;
	}
};