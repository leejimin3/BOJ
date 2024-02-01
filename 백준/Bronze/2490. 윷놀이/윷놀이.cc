#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			int tmp; cin >> tmp;
			if (tmp == 0) sum++;
		}

		switch (sum)
		{
		case 0:
			cout << "E" << "\n";
			break;
		case 1:
			cout << "A" << "\n";
			break;
		case 2:
			cout << "B" << "\n";
			break;
		case 3:
			cout << "C" << "\n";
			break;
		case 4:
			cout << "D" << "\n";
			break;
		default:
			break;
		}
	}

	return 0;
}