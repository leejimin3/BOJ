#include <iostream>
#include <map>
#include <string>
using namespace std;

int N;
map<string, string, greater<>> Map;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		Map[tmp1] = tmp2;
	}

	for (const auto& i : Map)
	{
		if (i.second == "enter")
		{
			cout << i.first << "\n";
		}
	}

	return 0;
}