#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B;
	

	while (1)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		cout << A + B << endl;
	}

	return 0;
}