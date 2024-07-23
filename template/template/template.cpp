#include <vector>
#include <string>
#include <iostream>

struct coordinate{
	int x;
	int y;
	bool operator>(const coordinate& other) {
		return this->x > other.x && this->y > other.y;
	}
};

template <typename variable_tipi>
void print_vector(std::vector<variable_tipi> &vec) {
	for(const auto &element : vec) {
		std::cout << element <<'\n';
	}
}

template <typename T>
T bigger(T a, T b) {
	if (a > b) {
		return a;
	};
	return b;
}



int main() {
	std::vector<int> int_vec{ 0,1,2,3,4,5,6,7,8,9,10 };
	std::vector<std::string> str_vec{"ulas", "taha", "riza", ""};
	print_vector(int_vec);
	print_vector(str_vec);
	coordinate c1{10,10};
	coordinate c2{11,11};
	
	bigger(c1, c2);
}