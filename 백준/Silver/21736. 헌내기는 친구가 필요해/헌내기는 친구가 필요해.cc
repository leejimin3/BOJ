#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
int cnt = 0;
int nodeX[4] = { -1, 0, 1, 0 };
int nodeY[4] = { 0, -1, 0, 1 };
char field[601][601];
bool visit[601][601];
pair<int, int> p;
queue<pair<int, int>> q;

void BFS()
{
	q.push(p);
	visit[q.front().first][q.front().second] = true;
	while (!q.empty())
	{
		p = q.front();
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int nodex = p.first + nodeX[i];
			int nodey = p.second + nodeY[i];

			if (nodex >= N || nodey >= M || nodex < 0 || nodey < 0 || visit[nodex][nodey] == true || field[nodex][nodey] == 'X') continue;
			{
				if (field[nodex][nodey] == 'P')
				{
					cnt++;
				}
				visit[nodex][nodey] = true;
				q.push({ nodex, nodey });
			}
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
			cin >> field[i][j];
			if (field[i][j] == 'I')
			{
				p = { i, j };
			}
		}
	}

	BFS();

	if (cnt == 0) cout << "TT" << "\n";
	else cout << cnt << "\n";

	return 0;
}