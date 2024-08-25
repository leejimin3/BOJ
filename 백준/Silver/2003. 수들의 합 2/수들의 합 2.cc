//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
long long M;
long long Start, End;
long long ans = 0;
vector<long long> vec;
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		long long tmp; cin >> tmp;
		vec.emplace_back(tmp);
	}

	Start = 0;
	End = 0;

	long long val = vec[0];
	while (End < N)
	{
		if (val > M)
		{
			val -= vec[Start];
			Start++;
		}
		else if (val < M)
		{
			End++;
			if (End >= N)
			{
				break;
			}

			val += vec[End];
		}
		else
		{
			ans++;
			val -= vec[Start];
			Start++;
			End++;
			if (End >= N)
			{
				break;
			}

			val += vec[End];

		}
	}

	cout << ans << "\n";

	return 0;
}