#include <iostream>
#include <map>
using namespace std;



int main() {

	int N,M;
	cin >> N >> M;
	string str;
	map<string, bool> m;
	int cnt = 0;

	for (int i =0; i < N; i++)
	{
		cin >> str;
		m.insert({str, true});
	}
	
	for (int i = 0; i < M; i++)
	{
		cin >> str;
		if (m.find(str) != m.end())
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}