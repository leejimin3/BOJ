#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int money, num, sum = 0;
	cin >> money >> num;

	int a,b;
	for (int i = 0; i < num; i++)
	{
		cin >> a >> b;
		sum += a*b;
	}
	if (sum == money)
		cout << "Yes";
	else
		cout << "No";
}