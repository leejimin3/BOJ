#include <iostream>
#include <queue>

using namespace std;

int n, m; int maxnum = 0, cnt = 0, num = 0;
int nodex[4] = { -1, 0, 1, 0 };
int nodey[4] = { 0, -1, 0, 1 };
bool visit[501][501] = {false,};
int field[501][501];
queue<pair<int, int>> q;

void BFS(int x, int y)
{
	q.push({ x,y });
	visit[x][y] = true;
	cnt = 1;
	while (!q.empty())
	{
		int x1 = q.front().first;
		int y1 = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nodeX = nodex[i] + x1;
			int nodeY = nodey[i] + y1;

			if (nodeX >= n || nodeY >= m || nodeX < 0 || nodeY < 0 || field[nodeX][nodeY] == 0 || visit[nodeX][nodeY] == true) continue;

			visit[nodeX][nodeY] = true;
			cnt++;
			q.push({nodeX, nodeY});
		}
	}
	if (cnt > maxnum)
	{
		maxnum = cnt;
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> field[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (field[i][j] == 1 && visit[i][j] == false)
			{
				num++;
				BFS(i,j);
			}
		}
	}

	cout << num << "\n" << maxnum << "\n";
	return 0;
}