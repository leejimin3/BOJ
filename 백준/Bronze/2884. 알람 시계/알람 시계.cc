#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int A,B;
	std::cin >> A >> B;


	if (B - 45 < 0) {
		B = 15 + B;
		if (A - 1 < 0)
			A = 23;
		else
			A -= 1;

	}
	else
		B -= 45;
	cout << A <<" " << B << endl;
	return 0;
}