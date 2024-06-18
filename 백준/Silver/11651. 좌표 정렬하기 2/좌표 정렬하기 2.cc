#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	int x, y = 0;
	vector<pair<int, int>> vec;

	int tmp;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		vec.emplace_back(y, x);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].second << " " << vec[i].first<< "\n";
	}

	return 0;
}