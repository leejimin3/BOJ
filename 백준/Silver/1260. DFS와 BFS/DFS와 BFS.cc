#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool bfsvisit[1001] = {0,};
bool dfsvisit[1001] = { 0, };
vector<int> vec[1001];

void dfs(int x)
{
	dfsvisit[x] = true;
	cout << x << " ";

	for (int i = 0; i < vec[x].size(); i++)
	{
		int y = vec[x][i];
		if(!dfsvisit[y])
			dfs(y);
	}
}

void bfs(int x)
{
	queue<int> queue;
	queue.push(x);
	bfsvisit[x] = true;
	while (!queue.empty())
	{
		int y = queue.front();
		cout << y << " ";
		queue.pop();

		for (int i = 0; i < vec[y].size(); i++)
		{
			int z = vec[y][i];
			if (!bfsvisit[z])
			{
				queue.push(z);
				bfsvisit[z] = true;
			}

		}
	}
}

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, V;

	cin >> N >> M >> V;

	int tmp1, tmp2;
	for (int i = 0; i < M; i++)
	{
		cin >> tmp1 >> tmp2;
		vec[tmp1].emplace_back(tmp2);
		vec[tmp2].emplace_back(tmp1);
		sort(vec[tmp1].begin(), vec[tmp1].end());
		sort(vec[tmp2].begin(), vec[tmp2].end());
	}

	dfs(V);
	cout << "\n";
	bfs(V);


	return 0;

}