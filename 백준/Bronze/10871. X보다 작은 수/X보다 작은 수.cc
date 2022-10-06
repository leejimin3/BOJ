#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B;
	cin >> A >> B;
	int x[10000];
	
	for (int i = 0; i < A; i++)
	{
		cin >> x[i];
	}

	for (int i = 0; i < A; i++)
	{
		if (B > x[i])
			cout << x[i] << " ";
	}


	return 0;
}