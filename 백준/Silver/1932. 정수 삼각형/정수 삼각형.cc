//#include <bits/stdc++.h>

#include <iostream>
#include <algorithm>
using namespace std;

int N;
int Max = 0;
int dp[500][500] = { 0,};

void Solution()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				dp[i][j] = dp[i - 1][0] + dp[i][j];
			}
			else if (j == i)
			{
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j - 1] + dp[i][j], dp[i - 1][j] + dp[i][j]);
			}

			Max = max(dp[i][j], Max);
		}
	}
}

void Input()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> dp[i][j];
		}
	}
}

void Output()
{
	cout << Max;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	Output();
	return 0;
}