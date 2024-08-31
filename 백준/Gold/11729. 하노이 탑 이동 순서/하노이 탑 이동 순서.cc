#include <iostream>
#include <vector>

using namespace std;
int N;

void Func(int a, int b, int n)
{
	// 원판이 한개일 때
	if (n == 1)
	{
		cout << a << " " << b << "\n";
		return;
	}

	Func(a, 6 - a - b, n - 1);
	cout << a << " " << b << "\n";
	Func(6 - a - b, b, n - 1);
}

void Input()
{
	cin >> N;
}

//void Output()
//{
//
//}

void Solution()
{
	cout << (1 << N) - 1 << "\n";
	Func(1, 3, N);
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	//Output();
	return 0;
}