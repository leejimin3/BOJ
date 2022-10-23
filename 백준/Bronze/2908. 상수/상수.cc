#include <iostream>

using namespace std;



int change(int a){return (a % 10 * 100) + (((a / 10) % 10) * 10) + (a / 100);}


int main(int argc, char* argv[])
{
	int a, b;
	cin >> a >> b;

	cout << max(change(a),change(b));

	return 0;
}