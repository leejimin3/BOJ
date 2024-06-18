#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int C, R;
char tmp;
char arr[101][101];
int intarr[101][101] = { 0, };
int moveX[8] = { -1, -1, -1, 0, 0, 1, 1, 1};
int moveY[8] = { 1, 0, -1 , 1, -1, 1, 0, -1};

void ChangeValue(int i, int j)
{
	intarr[i][j] = -1000;
	for (int k = 0; k < 8; k++)
	{
		int arrayX = j + moveX[k];
		int arrayY = i + moveY[k];

		if (arrayX < 0 || arrayX > R-1 || arrayY < 0 || arrayY > C-1) continue;
		intarr[arrayY][arrayX] += 1;
	}
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while (1)
	{
		cin >> C >> R;
		if (C == 0 && R == 0) return 0;

		for (int i = 0; i < 101; i++)
		{
			for (int j = 0; j < 101; j++)
			{
				arr[i][j] = ' ';
				intarr[i][j] = 0;
			}
		}

		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < R; j++)
			{
				cin >> tmp;
				arr[i][j] = tmp;
			}
		}

		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < R; j++)
			{
				if (arr[i][j] == '*')
				{
					ChangeValue(i, j);
				}
			}
		}

		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < R; j++)
			{
				if (intarr[i][j] + '0' < 0) arr[i][j] = '*';

				else
				{
					arr[i][j] = intarr[i][j] + '0';
				}

				cout << arr[i][j];
			}
			cout << "\n";
		}
	}

	return 0;
}
