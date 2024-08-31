#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

ll A, B, C;

void Input()
{
	cin >> A >> B >> C;
}

void Output(ll res)
{
	cout << res << '\n';
}

ll Func(ll a, ll b, ll c)
{
	// 귀납법 1 : A의 1승을 계산할 수 있다.(Base condition)
	if (b == 1) return a % c;

	// 귀납법 2 : A의 N승을 계산하면 AN및 AN+1승의 결과를 예할 수 있다.
	ll tmp = Func(a, b / 2, c);
	tmp = tmp * tmp % c;

	if (b % 2 == 0) return tmp;
	else return tmp * a % c;

}

void Solution()
{
	ll res = Func(A,B,C);
	Output(res);
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	//Output();
	return 0;
}