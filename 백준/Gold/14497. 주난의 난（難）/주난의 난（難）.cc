#include <iostream>
#include <queue>

using namespace std;

queue <pair<int, int>> q;
char field[302][302];

// 0 - 주난 위치 | -1 - 방문안함 | 1 - 방문함 | 2 - 방문했는데 사람있어서 없앰(중복방지)
int visit[302][302];

// 점프 수
int cnt = 0;

int N, M;
int x3, y3, x4, y4;

// 상하좌우
int nodex[4] = { -1,0,1,0 };
int nodey[4] = { 0,-1,0,1 };

// 범인을 찾았는지
bool flag = false;

void Input()
{
	cin >> N >> M;
	cin >> x3 >> y3 >> x4 >> y4;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> field[i][j];
		}
	}
}

void Output()
{
	cout << cnt << "\n";
}

void BFS(int x, int y)
{
	q.push({ x,y });
	visit[x][y] = 0;

	while (!q.empty())
	{
		int x1 = q.front().first;
		int y1 = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int x2 = x1 + nodex[i];
			int y2 = y1 + nodey[i];

			// 범위 벗어났으면 통과
			if (x2 < 0 || y2 < 0 || x2 >= N || y2 >= M) continue;

			// 주난이나 방문한 곳, 이미 사람이 쓰러진곳이면 통과
			if (visit[x2][y2] == 0 || visit[x2][y2] == 1 || visit[x2][y2] == 2) continue;

			// 범인 위치면 return
			if (field[x2][y2] == '#')
			{
				flag = true;
				return;
			}

			if (field[x2][y2] == '0')
			{
				q.push({ x2,y2 });
				visit[x2][y2] = 1;
			}
			else if (field[x2][y2] == '1')
			{
				field[x2][y2] = '0';
				visit[x2][y2] = 1;
			}
		}
	}
}

void Solution()
{
	cnt++;
	fill(&visit[0][0], &visit[N][M], -1);
	BFS(x3-1, y3-1);
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();

	while (!flag)
	{
		Solution();
	}


	Output();
	return 0;
}