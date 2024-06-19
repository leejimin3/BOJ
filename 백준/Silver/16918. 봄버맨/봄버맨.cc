#include <iostream>
#include <queue>

using namespace std;

char map[202][202];
char visit[202][202];
int R, C, N, cnt;
bool Evenflag, FirstFlag; string tmp;
queue<pair<int, int>> q;
int nodex[4] = { -1, 0, 1, 0 };
int nodey[4] = { 0, -1, 0, 1 };

void BFS(int i, int j)
{
	visit[i][j] = true;
	q.push({ i, j });
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int NodeX = x + nodex[i];
			int NodeY = y + nodey[i];
			if (NodeX >= R || NodeY >= C || NodeX < 0 || NodeY < 0) continue;
			{
				visit[NodeX][NodeY] = true;
			}
		}
	}
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> R >> C >> N;

  	for (int i = 0; i < R; i++)
	{
		cin >> tmp;
		for (int j = 0; j < C; j++)
		{
			visit[i][j] = false;
			map[i][j] = tmp[j];
		}
	}

	if (N == 1 || N == 0) FirstFlag = true;
	else if (N % 2 == 0) Evenflag = true;

	if (Evenflag || FirstFlag)
	{
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				if (Evenflag) cout << 'O';
				if (FirstFlag) cout << map[i][j];
			}
			cout << "\n";
		}
		return 0;
	}


	cnt = 3;
	while (N+1 > cnt)
	{
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				visit[i][j] = false;
			}
		}

		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				if (map[i][j] == 'O')
				{
					BFS(i, j);
				}
			}
		}

		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				if (visit[i][j] == true)
				{
					map[i][j] = '.';
				}
				else
				{
					map[i][j] = 'O';
				}
			}
		}
		cnt += 2;
	}

	

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (visit[i][j] == true)
			{
				cout << '.';
			}
			else
			{
				cout << 'O';
			}
		}
		cout << "\n";
	}
	return 0;
}