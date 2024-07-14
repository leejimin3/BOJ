#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> vec;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0) vec.emplace_back(i);
	}

	if (vec.size() < K)
	{
		cout << 0 << "\n";
	}
	else
	{
		cout << vec[K - 1] << "\n";
	}

	return 0;
}