#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, K, ans = 0;
	int tmp;
	cin >> N >> K;
	vector<int> vec;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end(), greater<int>());

	for (int i = 0; i < vec.size(); i++)
	{
		if (K >= vec[i])
		{
			ans += K / vec[i];
			K %= vec[i];
			if (K == 0)
				break;
		}
	}

	cout << ans << "\n";
	return 0;

}