#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

bool answer;

// 그래프
bool G[202][202] = {false,};

// 필드
int field[202][202] = {0,};

// 여행경로
int trip[1002] = {0,};

bool visit[1002] = { false, };

int N, M;

void BFS(int x)
{
	visit[x] = true;
	q.push(x);
	while (!q.empty())
	{
		int x1 = q.front();
		q.pop();

		for (int i = 0; i < N; i++)
		{
			if (visit[i]) continue;

			if (G[x1][i] == true)
			{
				visit[i] = true;
				q.push(i);
			}
		}
	}
}

void Input()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> field[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		cin >> trip[i];
	}
}

void Output()
{
	if (answer)
	{
		cout << "NO" << "\n";
	}
	else
	{
		cout << "YES" << "\n";
	}
}

void Solution() 
{	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (field[i][j] == 1)
			{
				G[i][j] = true;
			}
		}
	}


	BFS(trip[0]-1);

	for (int i = 0; i < M; i++)
	{
		if (visit[trip[i]-1] == false)
		{
			answer = true;
			break;
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}