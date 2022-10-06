#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	cin >> x;

	char* A = new char[x];
	cin >> A;

	int sum =0;

	for (int i =0; i < x; i++)
	{
		sum += int(A[i])-48;
	}

	cout << sum << "";


	return 0;

}