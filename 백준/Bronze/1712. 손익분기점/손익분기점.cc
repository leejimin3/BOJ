#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A,B,C;
	int D = 0;
	cin >> A >> B >> C;


	if (B >= C)
	{
		cout << -1;
	}
	else
	{
		cout << A/(C-B)+1;
	}
	
	}