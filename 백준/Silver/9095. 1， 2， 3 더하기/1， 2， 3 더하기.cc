#include <iostream>

using namespace std;

int N, K;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	while (N--)
	{
		cin >> K;

		int dp[11] = {0,};

		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for (int i = 4; i <= K; i++)
		{
			dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
		}

		cout << dp[K] << "\n";
	}

	return 0;
}