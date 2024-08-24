//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
long long M;
long long Start, End;
long long ans = 2000000000;
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

	sort(vec.begin(), vec.end());

	while (Start < N && End < N)
	{
		long long val = vec[End] - vec[Start];
		if (val > M)
		{
			ans = min(val, ans);
			Start++;
		}
		else if (val < M)
		{
			End++;
		}
		else
		{
			ans = val;
			break;
		}
	}

	cout << ans << "\n";

	return 0;
}