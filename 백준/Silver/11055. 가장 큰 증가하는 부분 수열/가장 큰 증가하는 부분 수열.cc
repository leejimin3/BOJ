#include <iostream>

using namespace std;

int N, Max;
int DP[1002];
int arr[1002];

void Input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}

void Output()
{
	cout << Max << "\n";
}

void Solution()
{
	for (int i = 0; i < N; i++)
	{
		DP[i] = arr[i];
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				DP[i] = max(DP[i], DP[j] + arr[i]);
			}
		}

		if (Max < DP[i]) Max = DP[i];
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}