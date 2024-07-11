#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;
int tmp;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end());

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> tmp;

		cout << binary_search(vec.begin(), vec.end(), tmp) << " ";
	}

	return 0;
}