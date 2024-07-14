#include <iostream>
#include <map>

using namespace std;

int N, M;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	while (N--)
	{
		cin >> M; int sum = 1;
		map<string, int> Map;
		string pos, obj;

		for(int i = 0; i < M; i++)
		{
			cin >> obj >> pos;
			Map[pos]++;	
		}

		map<string, int>::iterator it;
		for (it = Map.begin(); it != Map.end(); it++)
		{
			sum *= (it->second + 1);
		}

		cout << sum - 1 << "\n";
	}

	return 0;
}