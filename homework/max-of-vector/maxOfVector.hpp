#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max_value = vec[0];
    for(int i = 1; i <vec.size(); ++i) {
	    if(vec[i] > max_value) {
		    max_value = vec[i];
	    }
    }
    return max_value; 
}
