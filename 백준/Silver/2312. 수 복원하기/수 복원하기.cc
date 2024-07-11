#include <iostream>
#include <map>

using namespace std;

int N; int tmp;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		map<int, int> cntmap;
		int tmp2 = tmp;
		while (tmp2 > 1)
		{
			for (int j = 2; j <= tmp2; j++)
			{
				if (tmp2 % j == 0)
				{
					cntmap[j]++;
					tmp2 = tmp2 / j;
					break;
				}
			}
		}

		for (int j = 0; j <= tmp; j++)
		{
			if (cntmap[j] > 0)
			{
				cout << j << " " << cntmap[j] << "\n";
			}
		}
	}


	return 0;
}