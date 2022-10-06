#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int A;
	std::cin >> A;

	if (A % 4 == 0)
		if (A % 100 != 0 || A % 400 == 0)
			cout << "1";

		else
			cout << "0";
	else
		cout << "0";
	return 0;
}