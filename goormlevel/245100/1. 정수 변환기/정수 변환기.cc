#include <iostream>
#include <string>
#include <vector>
using namespace std;

int K, N;
string S;
string ans;
vector<int> vec;
int main() {
	
	cin >> N >> K;
	cin >> S; ans = "";
	
	for(int i = 0; i < S.length(); i++)
	{
			vec.emplace_back(S[i]);
	}
	
	for(int i = 0; i < vec.size(); i++)
	{
		int tmp = vec[i] - '0' + K;
		ans += to_string(tmp);
	}
	
	cout << ans << "\n";
	return 0;
}