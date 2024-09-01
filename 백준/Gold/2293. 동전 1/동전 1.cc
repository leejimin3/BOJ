#include <iostream>
#include <algorithm>

using namespace std;

int N,K;
int coin[105];
int DP[10005];

void Input()
{
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> coin[i];
	}
}

void Output()
{
	cout << DP[K] << "\n";
}

void Solution()
{
	DP[0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = coin[i]; j <= K; j++)
		{
			DP[j] += DP[j - coin[i]];
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