#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, K;
vector<int> vec;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;

	while (N--)
	{
		int tmp; cin >> tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.rbegin(), vec.rend());

	cout << vec[K - 1] << "\n";

	return 0;
}