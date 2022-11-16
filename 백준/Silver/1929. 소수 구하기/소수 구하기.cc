#include <iostream>
#include <math.h>
using namespace std;

int check(int num)
{
	if(num == 2)
		return 1;

	else if(num <= 1 || num % 2 == 0)
		return 0;

	else
	{
		for (int i = 3; i <= sqrt(num); i += 2)
		{
			if( num % i == 0)
				return 0;
		}
	}

	return 1;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int M,N;
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if(check(i) == 1)
			cout << i << "\n";
	}
	

    return 0;
}