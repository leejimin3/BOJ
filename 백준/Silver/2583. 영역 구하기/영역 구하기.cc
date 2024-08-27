//#include <bits/stdc++.h>

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

queue<pair<int,int>> q;
vector<int> vec;
int field[101][101];
int visit[101][101];

int NodeX[4] = { -1, 0 , 1, 0 };
int NodeY[4] = { 0, -1, 0, 1 };

int N,M,K, cnt;

void BFS(int x, int y)
{
	visit[x][y] = 1;
	cnt++;
	q.push({ x,y });

	int sum = 1;
	while (!q.empty())
	{
		int x1 = q.front().first;
		int y1 = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int x2 = x1 + NodeX[i];
			int y2 = y1 + NodeY[i];

			if (x2 < 0 || y2 < 0 || x2 >= N || y2 >= M || 1 == field[x2][y2] || 1 == visit[x2][y2]) continue;
			
			sum++;
			visit[x2][y2] = 1;
			q.push({ x2,y2 });
		}
	}

	vec.emplace_back(sum);
}

void Solution()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (0 == visit[i][j] && 0 == field[i][j])
			{
				BFS(i, j);
			}
				
		}
	}
}

void FillBox(int x1, int y1,int x2,int y2) // 0 2 , 4 4
{
	for (int i = N-y2; i < N-y1; i++)
	{
		for (int j = x1; j < x2; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Input()
{
	cin >> N >> M >> K;

	for (int i = 0; i < K; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		FillBox(x1, y1, x2, y2);
	}
}

void Output()
{
	cout << cnt << "\n";
	sort(vec.begin(), vec.end());
	
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	Output();
	return 0;
}