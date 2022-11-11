#include <iostream>

using namespace std;

int white[8][8] = { {'W','B','W','B','W','B','W','B'},
				   {'B','W','B','W','B','W','B','W'},
				   {'W','B','W','B','W','B','W','B'},
				   {'B','W','B','W','B','W','B','W'},
				   {'W','B','W','B','W','B','W','B'},
				   {'B','W','B','W','B','W','B','W'},
				   {'W','B','W','B','W','B','W','B'},
				   {'B','W','B','W','B','W','B','W'} };

int black[8][8] = { {'B','W','B','W','B','W','B','W'},
				   {'W','B','W','B','W','B','W','B'},
				   {'B','W','B','W','B','W','B','W'},
				   {'W','B','W','B','W','B','W','B'},
				   {'B','W','B','W','B','W','B','W'},
				   {'W','B','W','B','W','B','W','B'},
				   {'B','W','B','W','B','W','B','W'},
				   {'W','B','W','B','W','B','W','B'} };

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);


	int Wcnt= 0, Bcnt = 0, ans = 65;
	int N , M;
	cin >> N >> M;

	char list[51][51];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> list[i][j];
		}
	}

	for (int i = 0; i < N - 7; i++)
	{
		for (int j = 0; j < M - 7; j++)
		{
			for (int k = i; k < 8+i; k++)
			{
				for (int l = j; l < 8+j; l++)
				{
					if (list[k][l] != white[k-i][l-j])
						Wcnt++;
					if (list[k][l] != black[k-i][l-j])
						Bcnt++;
				}
			}


			if (ans > min(Wcnt, Bcnt))
				ans = min(Wcnt, Bcnt);

			Wcnt = 0; Bcnt = 0;
		}
	}



	cout << ans;

	return 0;
}