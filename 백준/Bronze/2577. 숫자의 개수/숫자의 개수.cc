#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int A, B, C = 0;
	int arr[10] = {0,0,0,0,0,0,0,0,0,0};

	cin >> A >> B >> C;

	int N = A * B * C;
	int K;
	for (int i = N; i > 0; i/=10)
	{
		K = N % 10;

		for (int j = 0; j < 10; j++)
		{
			if (j == K)
				arr[j] += 1;
		}

		N /= 10;

	}

	for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << "\n";
	}

	return 0;

}