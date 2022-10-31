#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
	int N, tmp, v, cnt =0;
	cin >> N;
	vector<int> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	cin >> v;

	for (auto i : vec)
	{
		if(i == v)
			cnt++;
	}

	cout << cnt;

	return 0;
}