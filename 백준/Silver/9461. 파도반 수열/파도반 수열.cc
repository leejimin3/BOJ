#include <iostream>
#include <algorithm>

using namespace std;

long long DP[101];
int T;

void Input()
{
	cin >> T;
}

void Output()
{

}

void Solution() 
{	
	int N;
	while (T--)
	{
		cin >> N;
		DP[1] = 1;
		DP[2] = 1;
		DP[3] = 1;
		DP[4] = 2;
		DP[5] = 2;

		for (int i = 6; i <= N; i++)
		{
			DP[i] = DP[i - 5] + DP[i-1];
		}
		cout << DP[N] << "\n";
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	//Output();
	return 0;
}