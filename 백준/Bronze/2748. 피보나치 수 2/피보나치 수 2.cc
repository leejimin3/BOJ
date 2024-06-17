#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<long long> vec;

	vec.emplace_back(0);
	vec.emplace_back(1);

	int n = 0; long long sum;
	cin >> n;

	if (n == 0)
	{
		cout << 0 << "\n"; return 0;
	}
	if (n == 1)
	{
		cout << 1 << "\n"; return 0;
	}

	for (int i = 2; i <= n; i++)
	{
		sum = vec[i - 1] + vec[i - 2];
		vec.emplace_back(sum);
	}

	cout << sum << "\n";

	return 0;
}