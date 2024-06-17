#include <iostream>
#include <map>

using namespace std;


int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<int, int> map;

	int N; int tmp = 0;
	cin >> N;

	while (N > 0)
	{
		tmp = N % 10;
		map[tmp] += 1;
		N /= 10;
	}

	if ((map[6] + map[9]) % 2 == 0)
	{
		tmp = (map[6] + map[9]) / 2;
	}
	else
	{
		tmp = (map[6] + map[9]) / 2 + 1;
	}
	map[6] = tmp; map[9] = tmp;

	tmp = 0;
	for (int i = 0; i <= 9; i++)
	{
		if (map[i] > tmp) tmp = map[i];
	}

	cout << tmp << "\n";

	return 0;
}