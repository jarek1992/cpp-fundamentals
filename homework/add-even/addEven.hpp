#pragma once
#include <vector>
#include <iostream>

int addEven(const std::vector<int>& numbers) {
	int add = 0;

	for(int i : numbers) {
		if(i % 2 == 0) {
			add += i;
		}
	}
	return add;
}
