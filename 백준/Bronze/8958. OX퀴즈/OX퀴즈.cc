#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N;
	int sum = 0, cnt = 1;
	cin >> N;


	string* arr = new string[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < arr[i].length(); j++)
		{
			if (arr[i][j] == 'O')
			{
				sum += cnt;
				cnt++;
			}
			else
			{
				sum += 0;
				cnt = 1;
			}
		}

		cout << sum << "\n";
		sum = 0;
		cnt = 1;
		
	}

	return 0;

}