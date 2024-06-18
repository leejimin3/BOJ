#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int cnt;
int map[26][26];
int visit[26][26];
string tmp;
queue<pair<int, int>> q;
vector<int> Acount;
int N;

int nodex[4] = { -1, 0 , 1, 0 };
int nodey[4] = { 0, -1 , 0, 1 };

void BFS(int i, int j)
{
	q.push(make_pair(i,j));
	visit[i][j] = 1;
	int count = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int NodeX = x + nodex[i];
			int NodeY = y + nodey[i];

			if (NodeX >= N || NodeY >= N || NodeX < 0 || NodeY < 0) continue;
			
			if (map[NodeX][NodeY] == 1 && visit[NodeX][NodeY] == 0)
			{
				count++;
				visit[NodeX][NodeY] = true;
				q.push({ NodeX, NodeY });
			}
		}
	}

	Acount.emplace_back(count);
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		for (int j = 0; j < N; j++)
		{
			map[i][j] = tmp[j] - '0';
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 1 && visit[i][j] == 0)
			{
				cnt++;
				BFS(i, j);
			}
		}
	}

	cout << cnt << "\n";

	sort(Acount.begin(), Acount.end());

	for (int i = 0; i < Acount.size(); i++)
	{
		cout << Acount[i] << "\n";
	}
}
