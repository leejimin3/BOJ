#include <iostream>

using namespace std;

int N, S, cnt = 0;
int arr[30];

void BT(int k, int sum)
{
	if(k == N)
	{
		if (sum == S)
		{
			cnt++;
		}
		return;
	}
	
	BT(k + 1, sum);
	BT(k + 1, sum + arr[k]);
}


void Solution()
{
	BT(0, 0);
}

void Input()
{
	cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}

void Output()
{
	if (S == 0) cnt--;
	cout << cnt;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	Output();
	return 0;
}