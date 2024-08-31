#include <iostream>
#include <algorithm>

using namespace std;

int N;
int DP[1001][3];
int cost[3];

void Input()
{
	cin >> N;
}

void Output()
{
	cout << min(DP[N][0], min(DP[N][1], DP[N][2]));
}

void Solution()
{
	DP[0][0] = 0;
	DP[0][1] = 0;
	DP[0][2] = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> cost[0] >> cost[1] >> cost[2];
		DP[i][0] = min(DP[i - 1][1], DP[i - 1][2]) + cost[0];
		DP[i][1] = min(DP[i - 1][0], DP[i - 1][2]) + cost[1];
		DP[i][2] = min(DP[i - 1][0], DP[i - 1][1]) + cost[2];
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}