#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int sum = 0, ans = 0;

	for (int i = 0; i < 4; i++)
	{
		int output, input; cin >> output >> input;
		sum += input - output;
	
		if (sum > ans) ans = sum;
	}

	cout << ans << "\n";
	return 0;
}