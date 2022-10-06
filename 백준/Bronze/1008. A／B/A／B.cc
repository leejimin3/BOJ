#include <iostream>

int main(int argc, char* argv[]) {
	double a, b;
	std::cin >> a >> b;
	std::fixed;
	std::cout.precision(12);

	std::cout << a / b;



	return 0;
}