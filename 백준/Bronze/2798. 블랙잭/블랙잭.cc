#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	int N, M, tmp, sum = 0;
	cin >> N >> M;

	vector<int> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	for (int i = 0; i < N-2; i++)
	{
		for (int j = i + 1; j < N-1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				if (vec[i] + vec[j] + vec[k] <= M && vec[i] + vec[j] + vec[k] > sum)
				{
					sum = vec[i] + vec[j] + vec[k];
				}
			}
		}
	}

	cout << sum;

	return 0;
}