#include <iostream>

using namespace std;

int N, cnt;
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
	cout << cnt << "\n";
}

void Solution()
{
	for (int i = 0; i < N; i++)
	{
		DP[i] = 1;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[i])
			{
				DP[i] = max(DP[i], DP[j] + 1);
			}
		}

		cnt = max(cnt, DP[i]);
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}