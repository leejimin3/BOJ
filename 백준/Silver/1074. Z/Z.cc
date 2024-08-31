#include <iostream>
#include <vector>

using namespace std;
int N, r, c;

// n = 1, r = 1, c = 1
int Func(int n, int r, int c)
{
	if (n == 0) return 0;
	int half = 1 << (n - 1);
	if (r < half && c < half) return Func(n - 1, r, c);
	if (r < half && c >= half) return half * half + Func(n - 1, r, c - half);
	if (r >= half && c < half) return 2*half*half + Func(n - 1, r - half, c);
	return 3 * half * half + Func(n - 1, r - half, c - half);

}

void Input()
{
	cin >> N >> r >> c;
}

void output(int n)
{
	cout << n << "\n";
}

void Solution()
{
	int ans = Func(N, r, c);
	output(ans);
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	return 0;
}