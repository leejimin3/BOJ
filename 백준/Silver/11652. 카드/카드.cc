#include <iostream>
#include <map>
#include <math.h>
using namespace std;

map<long long, int> cntmap;
int N; long long tmp;
//
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long maxnum = pow(2, 62);
	pair<long long, int> p = { maxnum, 0 };

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		cntmap[tmp]++;

		if (cntmap[tmp] >= p.second)
		{
			if (cntmap[tmp] == p.second && tmp >= p.first) continue;
			p = { tmp, cntmap[tmp] };
		}
	}

	cout << p.first << "\n";

	return 0;
}