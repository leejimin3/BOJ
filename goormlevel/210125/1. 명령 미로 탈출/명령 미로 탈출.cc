#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using namespace std;

pair<int, int> pos;	
string command;
int N, K, cnt;
bool pass;
char field[202][202];

void TryMovePos(int x, int y)
{
	if(x >= N || y >= N || x < 0 || y < 0 || field[x][y] == '3') return;
	
	pos = {x,y};
	cnt++;
	
	if(field[pos.first][pos.second] == '2') pass = true;
}


int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	cin >> N >> K;
	cin >> command;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> field[i][j];
			if(field[i][j] == '1') 
			{
				pos = {i, j};
			}
		}
	}
	
	for(int i = 0; i < K; i++)
	{
			if(command[i] == 'U')
			{
				TryMovePos(pos.first - 1, pos.second);
			}
			if(command[i] == 'D')
			{
				TryMovePos(pos.first + 1, pos.second);
			}
			if(command[i] == 'L')
			{
				TryMovePos(pos.first, pos.second-1);
			}
			if(command[i] == 'R')
			{
				TryMovePos(pos.first, pos.second+1);
			}
		
			if(pass)
			{
				cout << "SUCCESS" << " " << cnt << "\n";
				return 0;
			}
	}
	
	cout << "FAIL" << "\n";
	
	return 0;
}