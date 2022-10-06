#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int max = 0;
	int cnt = 0;

	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			cnt = i + 1;
		}
	}

	cout << max << "\n" << cnt << "\n";


	return 0;

}