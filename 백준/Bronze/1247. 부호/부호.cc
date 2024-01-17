#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	long long tmp, sum;
	int N, flowcheck;
	for (int cnt = 0; cnt < 3; cnt++)
	{
		sum = 0;
		flowcheck = 0;
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			cin >> tmp;
			long long prev = sum;
			sum += tmp;

			if (prev > 0 && tmp > 0 && sum < 0) flowcheck++;
			else if (prev < 0 && tmp < 0 && sum > 0) flowcheck--;
		}
		if (flowcheck == 0)
		{
			if (sum == 0) cout << "0" << "\n";
			else cout << (sum > 0 ? "+" : "-") << "\n";
		}

		else cout << (flowcheck > 0 ? "+" : "-") << "\n";
	}

	return 0;
}