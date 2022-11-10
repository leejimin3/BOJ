#include <iostream>
#include <map>
#include <vector>
#include <algorithm>


#define pp pair<int, int>

using namespace std;



bool val(const pp& left, const pp& right)
{
	if(left.first == right.first)
		return left.second < right.second;
	else
		return left.first < right.first;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int N;
	int x, y;
	cin >> N;
	
	multimap<int, int> map;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		map.insert({x,y});
	}

	vector<pp> vec(map.begin(), map.end());
	sort(vec.begin(), vec.end(), val);

	for (auto i : vec)
	{
		cout << i.first << " " << i.second << "\n";
	}

	return 0;
}