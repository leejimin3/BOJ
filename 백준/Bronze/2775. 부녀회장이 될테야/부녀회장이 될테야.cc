#include <iostream>
#include <numeric>
using namespace std;


int main(int argc, char* argv[])
{

	int T, k, n;
	cin >> T;



	for (int r = 0; r < T; r++)
	{
		cin >> k >> n;
		int list[15][15] = { 0, };
		
		for (int i = 0; i < k+1; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0)
				{
					list[i][j] = j+1;
				}

				else
				{
					for (int h = 0; h<j+1; h++)
					{
						list[i][j] += list[i-1][h];
					}
				}
			}
		}

		cout << list[k][n-1] << "\n";

	}
	

	return 0;
}