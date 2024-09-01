#include <iostream>

using namespace std;

int N, Max;
int DP[100001];
int arr[100001];

void Input()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
}

void Output()
{
	cout << Max;
}

void Solution()
{
	DP[1] = arr[1];
	Max = DP[1];
	for (int i = 2; i <= N; i++)
	{
		if (arr[i - 1] > arr[i - 1] + DP[i - 1])
		{
			DP[i] = arr[i];
		}
		else
		{
			DP[i] = DP[i - 1] + arr[i];
		}

		if (DP[i] > Max)
		{
			Max = DP[i];
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}