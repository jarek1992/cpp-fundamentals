#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
	std::vector<std::shared_ptr<int>> vec;
	for(int i = 0; i < count; ++i) {
		vec.push_back(std::make_shared(i));
	}
	return vec;
}

void print(std::vector<std::shared_ptr<int>>& vec) {
	for(const auto& element : vec) {
		std::cout << *element << " ";
	}
	std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
	for(auto& element : vec) {
		*element += 10;
	}
}

void sub10(int* ptr) {
	if(ptr != nullptr) {
		*ptr -= 10;
	}
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
	for(const auto& ptr :vec) {
		sub10(ptr.get());
	}
}

