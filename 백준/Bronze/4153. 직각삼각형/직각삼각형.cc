#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a,b,c;
	
	while (1)
	{
		cin >> a >> b >> c;

		if (a != 0 && b != 0 && c != 0)
		{
			vector<int> vec = { a,b,c };

			sort(vec.begin(), vec.end());

			if (pow(vec[0], 2) + pow(vec[1], 2) == pow(vec[2], 2))
			{
				cout << "right" << "\n";
			}

			else
			{
				cout << "wrong" << "\n";
			}
		}

		else
		{
			break;
		}
	}




	return 0;

}
