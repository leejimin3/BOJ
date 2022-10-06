#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0;
	cin >> A;

	int max = -1000000;
	int min = 1000000;
	int* arr = new int[A];

	for (int i = 0; i < A; i++)
	{
		cin >> arr[i];

		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	cout << min << " " << max << "\n";


	return 0;

}