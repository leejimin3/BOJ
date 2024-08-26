//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, sum;
int T[16];
int P[16];
int dp[16];

void DP()
{
	for (int i = 0; i <= N; i++)
	{
		dp[i] = max(sum, dp[i]);

		if (i + T[i] <= N)
		{
			dp[i + T[i]] = max(dp[i + T[i]], dp[i] + P[i]);
		}

		sum = max(sum, dp[i]);
	}


}

void Input()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> T[i] >> P[i];
	}
}

void Output()
{
	cout << sum << "\n";
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	DP();
	Output();
	return 0;
}