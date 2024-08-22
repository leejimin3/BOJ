#include <iostream>
using namespace std;

int A, B, C, D;

int solution(int A, int B)
{
	if (A < B)
	{
		int tmp = A;
		A = B; B = tmp;
	}

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
	cin >> C >> D;

	int y = B * D;
	int x = A * D + B * C;

	int r = solution(x, y);

	x /= r;
	y /= r;

	cout << x << " " << y << "\n";

	return 0;
} 