#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int N;
	cin >> N;

	int fir, sec;
	
	int list[51][2];
	int grade[51] = {0,};
	for (int i = 0; i < N; i++)
	{
		cin >> fir >> sec;
		list[i][0] = fir;
		list[i][1] = sec;
	}

	for (int i = 0; i < N; i++)
	{
		grade[i]++;
		for (int j = 0; j < N; j++)
		{
			if (i != j && list[j][0] >list[i][0] && list[j][1] > list[i][1])
			{
				grade[i]++;
			}
		}
	}

	for (auto i: grade)
	{
		if(i == 0)
			break;
		cout << i << " ";
	}

	return 0;
}