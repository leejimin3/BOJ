#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int list[31] = {0,};
	int tmp;
	
	for (int i = 0; i < 28 ; i++)
	{
		cin >> tmp;
		list[tmp]++;
	}

	for (int i = 1; i < 31; i++)
	{
		if(list[i] == 0)
			cout << i << "\n";
	}
	

	return 0;
}
