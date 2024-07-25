#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N, M;
int visit[9];
int arr[9];
vector<int> vec;

void solution(int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < cnt; i++)
		{
			cout << arr[i] << " ";
		}

		cout << "\n";
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			if (visit[i] == 0)
			{
				visit[i]++;
				arr[cnt] = vec[i];
				solution(cnt + 1);
				visit[i]--;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int tmp; cin >> tmp;
		vec.emplace_back(tmp);
	}
	sort(vec.begin(), vec.end());

	solution(0);

	return 0;
}