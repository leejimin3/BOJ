#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char tmp;
int N;
char charmap[1001][1001];
int intmap[1001][1001] = {0,};

int nodex[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int nodey[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void boom(int x, int y)
{
	for (int i = 0; i < 8; i++)
	{
		int nodeY = x + nodex[i];
		int nodeX = y + nodey[i];
		if (nodeY >= 0 || nodeX >= 0 || nodeY < N || nodeX < N)
		{
			intmap[nodeY][nodeX] += charmap[x][y] - '0';
		}
	}
	intmap[x][y] = 1001;
	//charmap[x][y] = '*';
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> tmp;
			charmap[i][j] = tmp;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (charmap[i][j] != '.')
			{
				boom(i, j);
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (intmap[i][j] >= 1000)
			{
				charmap[i][j] = '*';
			}
			else if (intmap[i][j] >= 10)
			{
				charmap[i][j] = 'M';
			}
			else
			{
				charmap[i][j] = intmap[i][j] + '0';
			}
			cout << charmap[i][j];
		}
		cout << "\n";
	}
}
