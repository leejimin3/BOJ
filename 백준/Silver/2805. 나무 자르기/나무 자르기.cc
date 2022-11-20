#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int	N, M, tmp;
	cin >> N >> M;

	vector<long long> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	long long first = 0;
	long long last = *max_element(vec.begin(), vec.end());
	long long ans = 0;
	while (first <= last)
	{
		long long sum = 0;
		long long mid = (first + last) / 2;

		for (int i = 0; i < vec.size(); i++)
		{
			if (mid <= vec[i])
				sum += vec[i] - mid;
		}

		if (sum >= M)
		{
			ans = mid;
			first = mid + 1;
		}

		else
		{
			last = mid - 1;
		}
			
			

	}

	cout << ans << "\n";
	return 0;

}