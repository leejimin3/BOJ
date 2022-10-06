#include <iostream>
#include <algorithm>
using namespace std;

void coll(int a, int b, int c)
{
	if (a == b && a != c)
		cout << 1000 + a * 100 << endl;
}

int main(int argc, char* argv[]) {

	int A, B, C;
	std::cin >> A >> B >> C;

	int arr[] = { A,B,C };

	if (A == B && B == C)
		cout << 10000 + A * 1000 << endl;
	if (A != B && B != C && A != C)
		cout << max({A,B,C}) * 100 << endl;
	else
		coll(A, B, C);
		coll(B, C, A);
		coll(A, C, B);

	return 0;
}