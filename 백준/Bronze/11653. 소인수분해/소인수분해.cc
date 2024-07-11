#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> vec;
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	if (N == 1) return 0;

	while (N > 1)
	{
		for (int i = 2; i <= N; i++)
		{
			if (N % i == 0)
			{
				//vec.emplace_back(i);
				cout << i << "\n";
				N = N / i;
				break;
			}
		}
	}

	return 0;
}