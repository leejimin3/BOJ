#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
int N, M;
set<vector<int>> sets;
int visit[9];
int arr[9];
void solution(int cnt)
{
	if (cnt == M)
	{
		vector<int> vec;
		for (int i = 0; i < cnt; i++)
		{
			vec.emplace_back(arr[i]);
		}
		sort(vec.begin(), vec.end());
		sets.insert(vec);
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (visit[i] == false)
			{
				visit[i] = true;
				arr[cnt] = i;
				solution(cnt + 1);
				visit[i] = false;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;
	solution(0);

	for (const auto& v : sets)
	{
		for (const auto& i : v)
		{
			cout << i << " ";
		}
		cout << "\n";
	}

	return 0;
}