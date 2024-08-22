#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<long long, int> Map;
map<long long, int> orderMap;

int N;
long long C;

bool cmp(pair<long long, int>& x, pair<long long, int>& y)
{
	if (x.second == y.second)
	{
		return orderMap[x.first] < orderMap[y.first];
	}

	return x.second > y.second;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> C;

	for (int i = 0; i < N; i++)
	{
		long long tmp; cin >> tmp;
		Map[tmp]++;

		if (orderMap[tmp] == 0)
		{
			orderMap[tmp] = i+1;
		}
	}

	vector<pair<long long, int>> vec(Map.begin(), Map.end());

	sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].second; j++)
		{
			cout << vec[i].first << " ";
		}
	}

	return 0;
} 