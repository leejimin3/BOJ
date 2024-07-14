#include <iostream>
#include <map>
#include <string>
using namespace std;

int N, M;
map<string, string> Map;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		Map[tmp1] = tmp2;
	}

	for (int i = 0; i < M; i++)
	{
		string tmp;
		cin >> tmp;

		map<string, string>::iterator it;
		if (Map.find(tmp) != Map.end())
		{
			it = Map.find(tmp);
			cout << it->second << "\n";
		}
	}

	return 0;
}