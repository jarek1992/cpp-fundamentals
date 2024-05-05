#pragma once
#include <vector>
#include <iostream>

std::vector<int> generateSequence(int count, int step) {
	std::vector<int> elements;
	for(int i = 0; i < count; ++i) {
		elements.push_back(step * (i +1));
	}
    return elements;
}
