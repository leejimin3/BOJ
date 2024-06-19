#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int sum;
int N, M,x,y;
vector<int> vec(100001);
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N >> M;

	vec[0] = 0;
	for (int i = 1; i <= N; i++)
	{
		int tmp;
		cin >> tmp;
		vec[i] = vec[i - 1] + tmp;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> x >> y;

		sum = vec[y] - vec[x-1];

		cout << sum << "\n";
	}

	return 0;
}