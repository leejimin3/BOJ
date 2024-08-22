#include <iostream>
using namespace std;

long long A, B;

int solution(int A, int B)
{
	int r = A % B;
	if (r == 0)
	{
		return B;
	}
	else
	{
		return solution(B, r);
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


	cin >> A >> B;

	cout << (A * B) / solution(A, B) << "\n";

	return 0;
} 