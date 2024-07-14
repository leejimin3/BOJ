#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, memcnt, quiz; string group, member;
unordered_map<string, vector<string>> member_map;
unordered_map<string, string> group_map;


int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> group; cin >> memcnt;
		for (int j = 0; j < memcnt; j++)
		{
			cin >> member;
			member_map[group].emplace_back(member);
			group_map[member] = group;
		}
	}
	
	for (int i = 0; i < M; i++)
	{
		cin >> member; cin >> quiz;
		if (quiz == 1)
		{
			cout << group_map[member] << "\n";
		}
		else
		{
			vector<string> tmp = member_map[member];
			sort(tmp.begin(), tmp.end());
			for (const auto& i : tmp)
			{
				cout << i << "\n";
			}
		}
	}

	return 0;
}