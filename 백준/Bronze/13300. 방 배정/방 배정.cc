#include <iostream>

using namespace std;

int N, K, S,Y, res;
int arr[2][6];

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> S >> Y;

		arr[S][Y - 1]++;
	}


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			while(arr[i][j] >= 1)
			{
				arr[i][j] -= 2;
				res++;
			}
		}
	}

	cout << res << "\n";

	return 0;
} 