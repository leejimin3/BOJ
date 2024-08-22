#include <iostream>
#include <map>

using namespace std;

int arr[26] = { 0, };
string S;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		arr[S[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
} 