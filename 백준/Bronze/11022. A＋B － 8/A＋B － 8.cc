#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A;
	cin >> A;

	int x, y;

	

	for (int i = 1; i <= A; i++)
	{
		cin >> x >> y;
		cout << "Case #" << i << ": " << x << " + " << y << " = " << x + y << "\n";
	}


}