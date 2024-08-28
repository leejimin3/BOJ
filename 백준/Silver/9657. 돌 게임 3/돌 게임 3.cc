#include <iostream>
#include <algorithm>
using namespace std;

int N;

int DP[1001];

void Solution()
{
	
	DP[1] = 1; //SK가 이김
	DP[2] = 0; //CY가 이김
	DP[3] = 1;
	DP[4] = 1;
	//DP[5] = 1;

	for (int i = 5; i <= N; i++)
	{
		if (DP[i - 1] == 0 || DP[i - 3] == 0 || DP[i - 4] == 0)
		{
			DP[i] = 1;
		}
		else
		{
			DP[i] = 0;
		}
	}

}

void Input()
{
	cin >> N;
}

void Output()
{
	if (DP[N] == 1)
	{
		cout << "SK" << "\n";
	}
	else
	{
		cout << "CY" << "\n";
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	Output();
	return 0;
}