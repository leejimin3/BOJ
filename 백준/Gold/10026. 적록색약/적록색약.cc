#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N, res, res2;
queue<pair<int, int>> q;
char field[101][101];
char field2[101][101];
int visit[101][101] = {0,};
bool rflag;

int nodex[4] = { -1, 0, 1, 0 };
int nodey[4] = { 0, -1, 0, 1 };

void BFS(int i, int j, char field[101][101])
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

			if (nodeX < 0 || nodeY < 0 || nodeX >= N || nodeY >= N || visit[nodeX][nodeY]) continue;
			if (field[x][y] != field[nodeX][nodeY]) continue;

			q.push({ nodeX, nodeY });
			visit[nodeX][nodeY] = 1;
		}
	}
	rflag = false;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			char tmp; cin >> tmp;
			field[i][j] = tmp;
			
			if (tmp == 'R' || tmp == 'G')
			{
				tmp = 'R';
			}
			field2[i][j] = tmp;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visit[i][j] == 0)
			{
				res++;
				BFS(i, j, field);
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			visit[i][j] = 0;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visit[i][j] == 0)
			{
				res2++;
				BFS(i, j, field2);
			}
		}
	}

	cout << res << " " << res2 << "\n";

	return 0;
}