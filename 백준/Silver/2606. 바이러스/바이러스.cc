#include <iostream>
#include <vector>
using namespace std;

bool visit[101];
vector<int> vec[101];
int cnt = 0;

void dps(int x)
{
	visit[x] = true;
	cnt ++;
	for (int i = 0; i < vec[x].size(); i++)
	{
		int y = vec[x][i];
		if(!visit[y])
			dps(y);
	}
}

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, V;

	cin >> N >> M;
	int tmp1,tmp2;
	for (int i = 0; i < M; i++)
	{
		cin >> tmp1 >> tmp2;

		vec[tmp1].emplace_back(tmp2);
		vec[tmp2].emplace_back(tmp1);
	}

	dps(1);

	cout << cnt-1 << "\n";
	return 0;

}