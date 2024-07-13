#include <iostream>
#include <vector>

using namespace std;

int N; int tmp;
vector<int> vec;
int dp[301] = {0,};

void DP()
{
	dp[0] = vec[0];
	dp[1] = dp[0] + vec[1];
	dp[2] = max(dp[0], dp[1]) + vec[2];

	for (int i = 3; i <= N; i++)
	{
		dp[i] = max(dp[i - 3] + vec[i - 1], dp[i - 2]) + vec[i];
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N; vec.emplace_back(0);
	for(int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	DP();

	cout << dp[N] << "\n";

	return 0;
}