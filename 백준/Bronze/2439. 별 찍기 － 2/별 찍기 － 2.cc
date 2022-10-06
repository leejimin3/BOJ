#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A;
	cin >> A;
	
	for (int i = 1; i <= A; i++)
	{
		for (int k = 0; k < A-i; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}


}