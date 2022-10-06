#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int A,B,C;
	std::cin >> A >> B >> C;

	std::cout << (A + B) % C  << std::endl;
	std::cout << ((A % C) + (B % C)) % C << std::endl;
	std::cout << (A*B) % C << std::endl;
	std::cout << ((A % C) *(B % C)) % C << std::endl;
	return 0;
}