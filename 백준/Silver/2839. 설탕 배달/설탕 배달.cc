#include <iostream>

using namespace std;

int greedy(int kg) {
	
	int cnt = 0;
	
	while (kg >= 3)
	{
		if (kg % 5 == 0)
		{
			cnt += kg / 5;
			kg %= 5;
		}
		else
		{
			kg -= 3;
			cnt++;
		}
	}

	if (kg > 0) { return -1; }
	return cnt;
}


int main() {
	
	int kg;
	cin >> kg;

	cout << greedy(kg);
}