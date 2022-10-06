#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A;
	cin >> A;

	for (int i = 0; i < A; i++)
	{
		int B;
		string C;
		cin >> B;
		cin >> C;

		for (int j = 0; j < C.length(); j++)
		{
			for (int k = 0; k < B; k++)
			{
				cout << C[j];
			}
		}

		cout << "\n";

	}

	return 0;

}