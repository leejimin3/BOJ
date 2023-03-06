#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

string list[100001];
map<string, int> Map;

void Add(string name, int num)
{
	list[num] = name;
	Map.insert({ name, num });
}

string Find(string name)
{

	if(Map.find(name) != Map.end()) { return to_string(Map.find(name)->second); }
	else { return list[stoi(name)];}
}

int main(int argc, char* argv[]) {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int M, N;
	string name;
	cin >> M >> N;

	vector<string> ans;

	for (int i = 1; i <= M; i++) 
	{
		cin >> name;
		Add(name, i); 
	}
	for (int i = 0; i < N; i++) 
	{ 
		cin >> name;
		ans.emplace_back(Find(name)); 
	}

	for (auto var : ans) { cout << var << "\n"; }

	return 0;
}