#include <iostream>
#include <math.h>
using namespace std;

long long input;
long long sum = 0;

int main() {

	cin.tie(NULL); ios_base::sync_with_stdio(false);
	
	cin >> input;
	
	for(int i = 1; i < input+1; i++)
	{
		sum += pow(3, i);
	}
	
	cout << sum;
	
	return 0;
}