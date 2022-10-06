#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int arr[10] = {};
	bool flag = false;
	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j])
				flag = true;
		}

		if (flag == false)
			cnt++;
		flag = false;
	}

	cout << cnt << "\n";

	return 0;

}