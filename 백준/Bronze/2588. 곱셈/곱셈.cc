#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int A,B,C,D,E;
	std::cin >> A >> B;

	C = B / 100;
	D = (B - (C * 100)) / 10;
	E = (B - (C * 100) - (D * 10));

	std::cout << A * E << std::endl;
	std::cout << A * D << std::endl;
	std::cout << A * C << std::endl;
	std::cout << A * B << std::endl;
	return 0;
}