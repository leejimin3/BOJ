#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[])
{
	vector<int> vec;

	int cnt;
	cin >> cnt;

	int num;

	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		vec.emplace_back(num);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < cnt; i++)
	{
		cout << vec[i] << "\n";
	}

}