#include <iostream>

using namespace std;

char field[6][6];
int nodex[4] = {-1, 0, 1, 0};
int nodey[4] = { 0,-1, 0, 1 };
int R, C, K, ans;
bool visit[6][6];

void dfs(int x, int y, int cnt)
{
	if (cnt == K)
	{
		if (x == 0 && y == C - 1)
		{
			ans++;
			return;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		int NodeX = x + nodex[i];
		int NodeY = y + nodey[i];

		if (NodeX < 0 || NodeY < 0 || NodeX >= R || NodeY >= C || visit[NodeX][NodeY] == true || field[NodeX][NodeY] == 'T') continue;
		
		visit[NodeX][NodeY] = true;
		dfs(NodeX, NodeY, cnt+1);
		visit[NodeX][NodeY] = false;
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> R >> C >> K;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> field[i][j];
		}
	}

	visit[R - 1][0] = true;
	dfs(R - 1, 0, 1);
	cout << ans << "\n";
	
	return 0;
} 