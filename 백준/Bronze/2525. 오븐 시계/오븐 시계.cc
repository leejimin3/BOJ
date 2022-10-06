#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int A, B, C;
	std::cin >> A >> B;
	std::cin >> C;

	A += C / 60;
	B += C % 60;
	if (B >= 60) {
		B -= 60;
		A += 1;
	}
	if (A >= 24) {
		A %=24;
	}

	cout << A << " " << B << endl;

	return 0;
}