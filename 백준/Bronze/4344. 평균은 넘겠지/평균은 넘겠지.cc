#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int C;
	cin >> C;
	int sum =0;
	int* num = new int[C];
	float over = 0;
	float A = 0;

	cout << fixed;
	cout.precision(3);

	for (int i = 0; i < C; i++)
	{
		cin >> num[i];
		int* score = new int[num[i]];
		 
		for (int j = 0; j < num[i]; j++)
		{
			cin >> score[j];
			sum += score[j];
		}

		for (int j = 0; j < num[i]; j++)
		{
 			if (score[j] > sum/num[i])
				over++;
		}
		A = over / num[i] * 100;
		cout << A << "%\n";

		over = 0;
		sum = 0;

	}

	return 0;

}