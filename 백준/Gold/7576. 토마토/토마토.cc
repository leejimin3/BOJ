#include <iostream>
#include <queue>

using namespace std;

int N, K, maximum;
int nodeX[4] = { -1,0,1,0 };
int nodeY[4] = { 0,-1,0,1 };
queue<pair<pair<int,int>, int>> q;
int visit[1001][1001];
int field[1001][1001];
int day[1001][1001];

void BFSADD(int x, int y, int cnt)
{
	q.push({{ x,y }, cnt});
	visit[x][y] = 1;
}

void BFS()
{
	while (!q.empty())
	{
		int x1 = q.front().first.first;
		int y1 = q.front().first.second;
		int cnt1 = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nodex = x1 + nodeX[i];
			int nodey = y1 + nodeY[i];
			if (nodex >= K || nodey >= N || nodex < 0 || nodey < 0 || visit[nodex][nodey] == true || field[nodex][nodey] == -1) continue;

			q.push({ { nodex, nodey }, cnt1 + 1 });
			visit[nodex][nodey] = 1;
			field[nodex][nodey] = 1;
			day[nodex][nodey] = cnt1 + 1;
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> field[i][j];
		}
	}

	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (field[i][j] == 1)
			{

				BFSADD(i, j, 0);
			}
		}
	}
	BFS();

	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (field[i][j] == 0)
			{
				cout << -1 << "\n";
				return 0;
			}

			if (day[i][j] > maximum) maximum = day[i][j];
		}
	}

	cout << maximum << "\n";
	return 0;
}