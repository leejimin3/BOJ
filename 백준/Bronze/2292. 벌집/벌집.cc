#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N, sum = 1;
	cin >> N;
	


	for (int i = 0;; i++)
	{
		if (N > sum + 6 * i)
		{
			sum += (6*i);
		}
		else
		{
			cout << i + 1;
			break;
		}
			
	}
	return 0;
}