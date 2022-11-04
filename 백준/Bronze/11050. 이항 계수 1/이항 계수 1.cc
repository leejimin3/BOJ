#include <iostream>

using namespace std;


int Fac(int A)
{
	if(A == 0){return 1;}
	else if(A == 1){return 1;}

	return A * Fac(A-1);
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int N,K;
	cin >> N >> K;

	cout << Fac(N)/(Fac(N-K)*Fac(K));

	return 0;
}