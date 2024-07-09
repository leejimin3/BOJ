#include <iostream>
#include <queue>

using namespace std;

int N;
int arr[3];
int visit[62][62][62];
int attack[6][3] = { {9,3,1}, {9,1,3}, {3,9,1}, {3,1,9}, {1,9,3}, {1,3,9} };

struct str
{
	int a, b, c;
};

void BFS(int arr1, int arr2, int arr3)
{
	queue<str> q;
	q.push({ arr1, arr2, arr3 });
	visit[arr1][arr2][arr3] = 0;

	while (!q.empty())
	{
		int a = q.front().a;
		int b = q.front().b;
		int c = q.front().c;
		q.pop();
		for (int i = 0; i < 6; i++)
		{
			int a1 = max(0, a - attack[i][0]);
			int b1 = max(0, b - attack[i][1]);
			int c1 = max(0, c - attack[i][2]);
			
			if (visit[a1][b1][c1] > 0) continue;
			visit[a1][b1][c1] = visit[a][b][c] + 1;
			q.push({ a1,b1,c1 });
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	BFS(arr[0], arr[1], arr[2]);

	cout << visit[0][0][0] << "\n";

	return 0;
}