#include <iostream>
#include <queue>

using namespace std;

int N, M;
int field[1001][1001];
int cnt[1001][1001];
int visit[1001][1001];
queue<pair<int,int>> q;

int nodex[4] = { -1,0,1,0 };
int nodey[4] = { 0,-1,0,1 };

void BFS(int i, int j)
{
	q.push({ i,j });
	visit[i][j] = 1;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nodeX = x + nodex[i];
			int nodeY = y + nodey[i];

			if (nodeX < 0 || nodeY < 0 || nodeX >= N || nodeY >= M || visit[nodeX][nodeY] == 1) continue;
			if (field[nodeX][nodeY] == 0) continue;

			cnt[nodeX][nodeY] = cnt[x][y] + 1;
			visit[nodeX][nodeY] = 1;
			q.push({ nodeX, nodeY });
		}
	}
} 

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int tmp; cin >> tmp;
			field[i][j] = tmp;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (field[i][j] == 2)
			{
				BFS(i, j);
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (cnt[i][j] == 0)
			{
				if (field[i][j] == 2)
				{
					cout << 0 << " ";
					continue;
				}
				if(field[i][j] != 0)
				{
					cout << -1 << " ";
					continue;
				}
			}

			cout << cnt[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}