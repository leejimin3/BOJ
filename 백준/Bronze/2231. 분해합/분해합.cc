#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, x;
	bool flag = false;
	int sum = 0;
	cin >>a;

	for (int i = 1; i < a; i++)
	{
		x = sum = i;
		do
		{
			b = x % 10;
			sum += b;
			x/=10;
			
		}while(x!=0);

		if (sum == a)
		{
			cout << i;
			flag = true;
			break;
		}
	}

	if (flag == false)
	{
		cout << 0;
	}

	return 0;

}
