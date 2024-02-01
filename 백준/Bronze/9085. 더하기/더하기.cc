#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T; cin >> T;

	for (int i = 0; i < T; i++)
	{
		int sum = 0;
		int N; cin >> N;
		for (int j = 0; j < N; j++)
		{
			int tmp; cin >> tmp;
			sum += tmp;
		}

		cout << sum << "\n";
	}

	return 0;
}