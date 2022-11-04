#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int N, tmp;
	cin >> N;

	int list[10001] = {0,};

	for (int i =0;i<N; i++)
	{
		cin >> tmp;
		list[tmp-1] += 1;
	}

	for (int i = 0; i < 10001; i++)
	{
		if (list[i] != 0)
		{
			for (int j = 0; j < list[i]; j++)
			{
				cout << i+1 << "\n";
			}
		}
	}

	return 0;
}