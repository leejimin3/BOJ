#include <iostream>
#include <algorithm>

using namespace std;

int N;
int DP[10001];
int arr[10001];

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
	DP[0] = 0;
	DP[1] = arr[1];
	DP[2] = arr[1] + arr[2];


	for (int i = 3; i <= N; i++)
	{
		DP[i] = max(DP[i-1], max(DP[i - 3] + arr[i - 1] + arr[i], DP[i - 2] + arr[i]));
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}