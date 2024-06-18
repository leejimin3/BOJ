#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int total = 100001;
int ans = 0;
int N, tmp;
vector<int> vec;

void Check()
{
	sort(vec.begin(), vec.end());
	ans = vec[(N - 1) / 2];
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}
	Check();
	cout << ans << "\n";

	return 0;
}