#include <iostream>
#include <random>

int main() {
	std::random_device rd;
	std::mt19937 mt(rd());
	for(int n = 0; n < 4; n++)
		std::cout << mt() << std::endl;
}
