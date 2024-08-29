#include <iostream>

using namespace std;

int N, cnt = 0;
bool bisused[3][40];

// k 는 선택한 갯수
void BT(int k)
{
	if(k == N)
	{
		cnt++;
		return;
	}
	
	for (int i = 0; i < N; i++)
	{
		if (bisused[0][i] || bisused[1][k + i] || bisused[2][k - i + N - 1]) continue;
		
		bisused[0][i] = true;
		bisused[1][k + i] = true;
		bisused[2][k - i + N - 1] = true;

		BT(k + 1);

		bisused[0][i] = false;
		bisused[1][k + i] = false;
		bisused[2][k - i + N - 1] = false;
	}
}


void Solution()
{
	BT(0);
}

void Input()
{
	cin >> N;
}

void Output()
{
	cout << cnt;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	Output();
	return 0;
}