#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec;
int N, M, tmp, cnt;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end());

	int start = 0, end = N - 1;
	
	while (start < end)
	{
		int sum = vec[start] + vec[end];
		if (sum == M)
		{
			cnt++;
			start++;
			continue;
		}

		else if (sum > M)
		{
			end--;
			continue;
		}

		else if (sum < M)
		{
			start++;
			continue;
		}
	}

	cout << cnt << "\n";
	return 0;
}