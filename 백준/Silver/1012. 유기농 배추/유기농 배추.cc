#include <iostream>
#include <queue>

using namespace std;

int M, N, K;
int Farm[51][51];
bool Visit[51][51];

queue<pair<int, int>> Queue;
int nodeX[4] = {-1, 0, 1, 0};
int nodeY[4] = {0, -1, 0, 1};

void Init(int M, int N)
{
	while (!Queue.empty()) Queue.pop();
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			Farm[i][j] = 0;
			Visit[i][j] = false;
		}
	}
}

void bfs(int X, int Y)
{
	Queue.push({ X, Y });
	Visit[X][Y] = true;
	while (!Queue.empty())
	{
		int x = Queue.front().first;
		int y = Queue.front().second;
		Queue.pop();

		for (int i = 0; i < 4; i++)
		{
			int nodex = x + nodeX[i];
			int nodey = y + nodeY[i];

			if (nodex >= 0 && nodey >= 0 && nodex < N && nodey < M && !Visit[nodex][nodey] && Farm[nodex][nodey] == 1)
			{
				Visit[nodex][nodey] = true;
				Queue.push({ nodex, nodey });
			}
		}
	}
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int cnt = 0;
		cin >> M >> N >> K;
		
		Init(M, N);

		for (int j = 0; j < K; j++)
		{
			int X, Y;
			cin >> Y >> X;
			Farm[X][Y] = 1;
		}

		for (int k = 0; k < N; k++)
		{
			for (int l = 0; l < M; l++)
			{
				if (Farm[k][l] == 1 && !Visit[k][l])
				{
					bfs(k, l);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}