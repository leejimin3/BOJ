#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long N;
vector<int> vec;
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	while (N)
	{
		int tmp = N % 10;
		vec.emplace_back(tmp);
		N /= 10;
	}
	sort(vec.rbegin(), vec.rend());

	for (const auto& i : vec)
	{
		cout << i;
	}

	return 0;
}