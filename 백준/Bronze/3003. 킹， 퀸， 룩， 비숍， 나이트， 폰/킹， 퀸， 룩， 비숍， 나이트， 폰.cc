#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{

	vector<int> chess = {1,1,2,2,2,8};

	int tmp;

	for (int i = 0; i < 6; i++)
	{
		cin >> tmp;
		chess[i] -= tmp;
		cout << chess[i] << " ";
	}


	return 0;
}