#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, char* argv[]) {

	int A;
	cin >> A;

	for (int i = 1; i <= 9; i++)
	{
		cout << A << " * " << i << " = " << i*A << endl;
	}

	return 0;
}