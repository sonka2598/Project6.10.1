#include <iostream>
#include <vector>
#include <string>
#include <utility> 

template <typename T>
void move_vectors(T& from, T& to) {
	to = std::move(from); 
	from.clear();
}

template <typename T>
void print_vectors(const T& vec) {
	for (const auto& item : vec) {
		std::cout << item << ' ';
	}
	std::cout << '\n';
}

int main() {
	setlocale(LC_ALL, "Russian");

	std::vector<std::string> one = { "test_string1", "test_string2" };
	std::vector<std::string> two;

	std::cout << "До перемещения:\n";
	print_vectors(one);

	move_vectors(one, two);

	std::cout << "После перемещения:\n";
	print_vectors(two);
	
	return 0;
}
