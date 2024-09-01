#include <iostream>
#include <algorithm>

using namespace std;

int N, Max;
int DP[100001];
int arr[100001];

void Input()
{
	cin >> N;
}

void Output()
{
	cout << Max;
}

void Solution()
{
	cin >> arr[1];
	DP[1] = arr[1];
	Max = DP[1];

	for (int i = 2; i <= N; i++)
	{
		cin >> arr[i];

		DP[i] = max(arr[i], DP[i - 1] + arr[i]);
		Max = max(DP[i], Max);
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}