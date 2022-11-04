#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{


	while (1)
	{
		string N, ans = "yes";
		cin >> N;

		if (N.size() == 1 && N.back() == 48)
		{
			break;
		}

		int j = N.size() - 1;

		for (int i = 0; i < (N.size() / 2); i++, j--)
		{
			if (N[i] != N[j])
			{
				ans = "no";
			}
		}

		cout << ans << "\n";

	}
	return 0;
}