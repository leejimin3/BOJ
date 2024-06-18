#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int NodeY[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int NodeX[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
char board[20][20];
char answerBoard[20][20];
char tmp;
int N;
bool bisboom;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<pair<int, int>> pair;

	cin >> N;

	for (int i = 0; i < N+N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> tmp;
			board[i][j] = tmp;
			answerBoard[i][j] = '0';
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] == '.') continue;

			if (board[i][j] == '*')
			{
				pair.emplace_back(i,j);
				for (int k = 0; k < 8; k++)
				{
					int nodeX = i + NodeY[k];
					int nodeY = j + NodeX[k];
					
					if (nodeX >= 0 && nodeY >= 0 && nodeX < N && nodeY < N)
					{
						answerBoard[nodeX][nodeY] += 1;
					}
				}
			}
		}
	}

	for (int  i = N; i < N+N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] == 'x')
			{
				if (board[i - N][j] == '*') bisboom = true;
				answerBoard[i][j] = answerBoard[i - N][j];
			}
			else
			{
				answerBoard[i][j] = '.';
			}
		}
	}

	for (int i = N; i < N+N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i-N][j] == '*' && bisboom)
			{
				cout << '*';
			}
			else
			{
				cout << answerBoard[i][j];
			}
		}
		cout << "\n";
	}
}