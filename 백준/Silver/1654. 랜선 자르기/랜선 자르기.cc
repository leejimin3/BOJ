#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long ans = 0;
	int K, N;
	cin >> K >> N;
	long long tmp;
	vector<long long> vec;

	for (int i = 0; i < K; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}



	long long first = 1;
	long long end = *max_element(vec.begin(), vec.end());

	while (first <= end)
	{
		long long sum = 0;
		long long mid = (first + end) / 2;
		for (int i = 0; i < K; i++)
		{
			if (vec[i] >= mid)
			{
				sum += (vec[i] / mid);
			}
		}
			if(sum < N)
				end = mid-1;
			else
			{
				ans = mid;
				first = mid +1;
			}
	}

	cout << ans << "\n";

	return 0;

}