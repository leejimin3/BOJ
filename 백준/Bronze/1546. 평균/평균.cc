#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N;
	float Sum =0;
	cin >> N;

	float* arr = new float[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	float M = *max_element(arr, arr + N);

	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / M * 100;
		Sum += arr[i];
	}

	cout << Sum/N << "\n";

	return 0;

}