#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, cnt;

int visit[1001];
vector<int> vec[1001];

void dfs(int x)
{
	visit[x] = true;
	for (int i = 0; i < vec[x].size(); i++)
	{
		if (visit[vec[x][i]] == false)
		{

			dfs(vec[x][i]);
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int x, y = 0;
		cin >> x >> y;
		
		vec[x].emplace_back(y);
		vec[y].emplace_back(x);
	}

	for (int i = 1; i <= N; i++)
	{
		if (visit[i] == false)
		{
			cnt++;
			dfs(i);
		}
	}

	cout << cnt << "\n";
	
	return 0;
} 