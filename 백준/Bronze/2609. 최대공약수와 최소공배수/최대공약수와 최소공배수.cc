#include <iostream>

using namespace std;

int maximum(int a, int b)
{
	int c = 0;

	while (b != 0)
	{
		c=a%b;
		a=b;
		b=c;
	}

	return a;
}

int minimum(int a, int b)
{
	return a*b/maximum(a,b);
}

int main(int argc, char* argv[])
{

	int a,b;
	cin >> a >> b;

	cout << maximum(a,b) << "\n" << minimum(a, b) << "\n";

	return 0;
}