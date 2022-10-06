#include <iostream>

using namespace std;

int cal(int a, int b, int v) {
	
	int day;

	day = (v - a) / (a - b);

	if((v - a) % (a - b) != 0){day++;}

	return ++day;
}


int main() {
	
	int a,b,v;
	cin >> a >> b >> v;

	cout << cal(a, b, v);
		
}