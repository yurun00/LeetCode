#pragma once

#include <algorithm>

class Solution {
public:
	static int divide(int dividend, int divisor) {
		if (divisor == 0 || dividend == INT_MIN && divisor == -1)
			return INT_MAX;
		int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
		int rst = 0, rem = 0;
		long long dvd = labs(dividend);
		long long dvs = labs(divisor);
		while (dvd >= dvs) {
			long long tmp = dvs, mlt = 1;
			while (dvd >= (tmp << 1)) {
				tmp <<= 1;
				mlt <<= 1;
			}
			rst += mlt;
			dvd -= tmp;
		}
		rem = dvd;
		return sign * rst;
	}
};
