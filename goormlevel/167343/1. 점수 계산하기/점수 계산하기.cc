#include <iostream>
using namespace std;

int N, sum, num = 1;
string S;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	cin >>N;
	cin.ignore();
	
	cin >>S;
	
	for(int i = 0; i < S.length(); i++)
	{
		if(S[i] == 'O')
		{
			sum += num;
			num++;
		}
		else{
			num = 1;
		}
	}
	
	cout << sum << "\n";
	return 0;
}