#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int N, M, cnt = 0;
unordered_map<string, int> Map;
vector<pair<string, int>> vec;

bool Compare(const pair<string, int>& a, const pair<string, int>& b)
{
	return a.second < b.second;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		string tmp; cin >> tmp;
		Map[tmp] = i;
	}

	for (const auto& i : Map)
	{
		vec.emplace_back(i);
	}

	sort(vec.begin(), vec.end(), Compare);

	for (int i = 0; i < min(N, (int)vec.size()); i++)
	{
		cout << vec[i].first << "\n";
	}

	return 0;
}