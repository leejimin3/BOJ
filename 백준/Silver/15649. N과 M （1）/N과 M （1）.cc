#include <iostream>

using namespace std;

int arr[9] = { 0, };
int visit[9] = { 0, };
int N, M;

void solution(int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (visit[i] == false)
			{
				visit[i] = true;
				arr[cnt] = i;
				solution(cnt + 1);
				visit[i] = false;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;
	solution(0);

	return 0;
}