#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int selfnumber(int a)
{
	int sum = 0;

	sum += a;

	while (a!=0)
	{
		sum += a % 10;
		a /= 10;
	}

	return sum;
}

int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int* a = new int[10000];
	int* b = new int[10000];

	for (int i = 1; i <= 10000; i++)
	{
		a[i] = i;
		b[i] = i;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j <= 10000; j++)
		{
			if (b[i] == selfnumber(a[j]))
				b[i] = 0;
		}
	}

	for (int i = 1; i <= 10000; i++)
	{
		if(b[i] != 0)
			cout << b[i] << "\n";
	}

	return 0;

}