#include <iostream>

using namespace std;

int N;
int DP[35];

void Input()
{
	cin >> N;
}

void Output()
{
	cout << DP[N] << "\n";
}

void Solution()
{
	DP[0] = 1;
	DP[1] = 0;
	DP[2] = 3;

	for (int i = 4; i <= N; i+=2)
	{
		DP[i] = DP[i - 2] * 3;
		
		for (int j = i - 4; j >= 0; j -= 2)
		{
			DP[i] = DP[i] + (DP[j] * 2);
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