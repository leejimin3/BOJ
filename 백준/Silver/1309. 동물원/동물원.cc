#include <iostream>

using namespace std;

int N;
int DP[100001][3];
int cut = 9901;
void Input()
{
	cin >> N;
}

void Output()
{
	cout << (DP[N][0] + DP[N][1] + DP[N][2]) % cut;
}

void Solution()
{
	// 만약 DP[i-1] - DP[i-2]가 2이면 배치를 한것
	DP[1][0] = 1;
	DP[1][1] = 1;
	DP[1][2] = 1;

	for (int i = 2; i <= N; i++)
	{
		DP[i][0] = (DP[i - 1][0] + DP[i - 1][1] + DP[i - 1][2]) % cut;
		DP[i][1] = (DP[i - 1][0] + DP[i - 1][2]) % cut;
		DP[i][2] = (DP[i - 1][0] + DP[i - 1][1]) % cut;
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	Output();
	return 0;
}