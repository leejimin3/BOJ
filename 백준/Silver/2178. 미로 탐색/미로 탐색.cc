#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
bool visit[101][101] = { false };
bool board[101][101] = { false };
int range[101][101];


int xrange[4] = { -1,1,0,0 };
int yrange[4] = { 0,0,-1,1 };

queue<pair<int, int>>q;

void bfs(int i, int j)
{
	visit[i][j] = true;
	q.push(make_pair(i,j));
	range[i][j]++;


	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int k = 0; k < 4; k++)
		{
			int x2 = x + xrange[k];
			int y2 = y + yrange[k];
			if ((x2 >= 0 && x2 < N) && (y2 >= 0 && y2 < M) && !visit[x2][y2] && board[x2][y2] == true)
			{
				visit[x2][y2] = true;
				q.push(make_pair(x2, y2));
				range[x2][y2] = range[x][y] + 1;
			}
		}
	}
}

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);



	cin >> N >> M;
	string tmp;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		for (int j = 0; j < M; j++)
		{
			if (tmp[j] == '1')
				board[i][j] = true;
		}
	}


	bfs(0, 0);

	cout << range[N-1][M-1];
}