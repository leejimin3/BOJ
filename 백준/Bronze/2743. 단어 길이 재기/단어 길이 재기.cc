#include <iostream>

using namespace std;

string s;

void Input()
{
	cin >> s;
}

void Output()
{
	cout << s.length();
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Output();
	return 0;
}