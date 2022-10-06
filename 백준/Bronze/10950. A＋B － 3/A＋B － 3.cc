#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {

	int A;
	cin >> A;

	int x, y;
	for (int i = 0; i < A; i++)
	{
		cin >> x >> y;
		cout << x + y << endl;
	}
}