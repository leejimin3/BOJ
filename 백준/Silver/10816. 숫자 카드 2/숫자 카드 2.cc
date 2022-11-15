#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int M,N, tmp;

	cin >> N;
	vector<int> list(N);

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		list[i] = tmp;
	}

	sort(list.begin(), list.end());

	cin >> M;
	vector <int> answer(M);
	
	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		auto Front = upper_bound(list.begin(), list.end(), tmp);
		auto Back = lower_bound(list.begin(), list.end(), tmp);
		answer[i] = Front - Back;
	}

	for (auto i : answer)
	{
		cout << i << " ";
	}

	return 0;
}