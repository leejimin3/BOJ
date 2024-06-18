#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	int tmp = 0;
	vector<int> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}

	return 0;
}