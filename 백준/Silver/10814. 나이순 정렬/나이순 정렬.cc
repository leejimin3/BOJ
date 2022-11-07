#include <iostream>
#include <map>
using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int N;
	cin >> N;

	int age; string name;

	multimap <int , string> map;

	for (int i = 0; i < N; i++)
	{
		cin >> age >> name;
		map.insert({age, name});
	}

	for (auto i : map)
	{
		cout << i.first << " " << i.second << "\n";
	}

	return 0;
}