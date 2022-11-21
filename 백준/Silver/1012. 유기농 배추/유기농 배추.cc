#include <iostream>
#include <vector>
using namespace std;

bool visit[51][51] = { false };
bool list[51][51] = {false};

void dfs(int i, int j, int M, int N)
{
	visit[i][j] = true;
	if (j + 1 < M && !visit[i][j + 1] && list[i][j + 1] == 1)
	{
		dfs(i, j + 1, M, N);
	}
	if (j - 1 >= 0 && !visit[i][j - 1] && list[i][j - 1] == true)
	{
		dfs(i, j - 1, M, N);
	}

	if (i + 1 < N && !visit[i + 1][j] && list[i + 1][j] == 1)
	{
		dfs(i + 1, j, M, N);
	}
	if (i - 1 >= 0 && !visit[i - 1][j] && list[i - 1][j] == true)
	{
		dfs(i - 1, j, M, N);
	}
}

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;

	cin >> T;

	for (int t = 0; t < T; t++)
	{
		for (int i = 0; i < 51; i++)
		{
			for (int j = 0; j < 51; j++)
			{
				visit[i][j] = false;
				list[i][j] = false;
			}
		}


		int M, N, K;
		int tmp1, tmp2;
		int cnt = 0;
		cin >> M >> N >> K;

		for (int i = 0; i < K; i++)
		{
			cin >> tmp1 >> tmp2;
			list[tmp2][tmp1] = true;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (!visit[i][j] && list[i][j] == 1)
				{
					visit[i][j] = true;
					cnt++;
					if (j + 1 < M && !visit[i][j + 1] && list[i][j+1] == true)
					{
						dfs(i, j + 1, M, N);
					}
					if (j - 1 >= 0 && !visit[i][j - 1] && list[i][j - 1] == true)
					{
						dfs(i, j - 1, M, N);
					}

					if (i + 1 < N && !visit[i + 1][j] && list[i+1][j] == true)
					{
						dfs(i + 1, j, M, N);
					}
					if (i - 1 >=0 && !visit[i - 1][j] && list[i - 1][j] == true)
					{
						dfs(i - 1, j, M, N);
					}


				}
			}
		}

		cout << cnt << "\n";
	}

}