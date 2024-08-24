//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, N, M;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> T;

	while (T--)
	{
		int cnt = 0;
		int point = 0;
		vector<int> A;
		vector<int> B;

		cin >> N >> M;

		for (int i = 0; i < N; i++)
		{
			int tmp; cin >> tmp;
			A.emplace_back(tmp);
		}

		for (int i = 0; i < M; i++)
		{
			int tmp; cin >> tmp;
			B.emplace_back(tmp);
		}

		sort(A.begin(), A.end());
		sort(B.begin(), B.end());

		for (int i = 0; i < N; i++)
		{
			while (point < M && A[i] > B[point])
			{
				point++;
			}
			cnt += point;
		}

		cout << cnt << "\n";
	}

	return 0;
}