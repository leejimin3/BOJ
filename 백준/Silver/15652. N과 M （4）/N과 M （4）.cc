#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N, M;
int visit[9];
int arr[9];

void solution(int cnt, int k)
{
	if (cnt == M)
	{
		for (int i = 0; i < cnt; i++)
		{
			cout << arr[i] << " ";
		}

		cout << "\n";
	}
	else
	{
		for (int i = k; i <= N; i++)
		{
			if (visit[i] < M)
			{
				visit[i]++;
				arr[cnt] = i;
				solution(cnt + 1, i);
				visit[i]--;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;
	solution(0, 1);

	return 0;
}