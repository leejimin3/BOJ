#include <iostream>
#include <map>

using namespace std;

map<int,int> maps;
int N, R;
bool flag;
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> R;

	for (int i = 0; i < R; i++)
	{
		int tmp; cin >> tmp;
		maps[tmp]++;
	}

	for (int i = 1; i <= N; i++)
	{
		if (maps[i] == 0)
		{
			cout << i << " ";
			flag = true;
		}
	}

	if (false == flag) cout << '*';
	
	return 0;
} 