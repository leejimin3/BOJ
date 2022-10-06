#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B;
	int cnt = 0;
	while (cin >> A)
	{
		B = A;
		while (1)
		{
			cnt++;
			A = ((A / 10 + A % 10)%10) + (A % 10)*10;
			if (A == B)
			{
				cout << cnt << "\n";
				break;
			}

		}
		
		cnt = 0;
	}
	
}