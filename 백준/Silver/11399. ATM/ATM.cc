#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, tmp = 0, ans = 0;
	vector<int> vec;

	cin >> N;

	for (int i = 0; i < N; i++) 
	{ 
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	tmp = 0;
	sort(vec.begin(), vec.end());

	for (auto i : vec)
	{
		tmp += i;
		ans += tmp;
	}

	cout << ans;

	return 0;
}