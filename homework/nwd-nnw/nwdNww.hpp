#pragma once
#include <iostream>
#include <cstdlib>

int NWD(int lhs, int rhs) {
	while(rhs != 0) {
	int temp = rhs;
	rhs = lhs % rhs;
	lhs = temp;
	}

	return abs(lhs);
}

int NWW(int lhs, int rhs) {
	if(NWD(lhs, rhs) == 0) {
		return 0;
	}
	return abs((lhs * rhs) / NWD(lhs, rhs));
}
