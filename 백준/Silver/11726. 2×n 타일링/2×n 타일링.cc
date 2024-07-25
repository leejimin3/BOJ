#include <iostream>

using namespace std;

int N;
int dp[1001];

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= N; i++)
	{
		dp[i] = (dp[i-2] + dp[i-1]) % 10007;
	}

	cout << dp[N] << "\n";

	return 0;
}