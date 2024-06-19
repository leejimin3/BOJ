#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int Field[22][22];
int N, K, sum;
int nodex[4] = {-1, 0, 1, 0};
int nodey[4] = {0, -1, 0, 1};
vector<pair<int,int>> vec;
queue<pair<int,int>>q;

void BFS(int x, int y)
{
	Field[x][y] += 1;
	for(int i = 0; i < 4; i++)
	{
		int NodeX = nodex[i] + x;
		int NodeY = nodey[i] + y;		
		
		if(NodeX > N || NodeY > N || NodeX <0 || NodeY < 0)continue;
		
		Field[NodeX][NodeY] += 1;
	}

	
}

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	
	cin >> N >> K;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			Field[i][j] = 0;
		}
	}
	
	for(int i = 0; i< K; i++)
	{
		int x,y;
		cin >> x >> y;
		
		vec.emplace_back(make_pair(x,y));
	}
	
	for(int i = 0; i < vec.size(); i++)
	{
		BFS(vec[i].first-1, vec[i].second-1);
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			sum += Field[i][j];
		}
	}
	
	cout << sum << "\n";
	return 0;
}