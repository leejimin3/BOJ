#include <iostream>
#include <algorithm>

using namespace std;

int N;

int DP[1001];
int arr[1001];

void Input()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
}

void Output()
{
	cout << DP[N] << "\n";
}

void Solution() 
{	
	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N; j ++)
		{
			DP[j] = max(DP[j], DP[j - i] + arr[i]);
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