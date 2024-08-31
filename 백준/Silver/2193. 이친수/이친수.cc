#include <iostream>

using namespace std;

using ll = long long;

ll N;
ll DP[92];

void Input()
{
	cin >> N;
}

void Output()
{
	cout << DP[N];
}

void Solution()
{
	DP[1] = 1;
	DP[2] = 1;

	for (int i = 3; i <= N; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2];
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}