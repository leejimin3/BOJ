#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	int N, ans = 0;

	cin >> N;

	ans += N / 5;
	ans += N / 25;
	ans += N / 125;

	cout << ans;

	return 0;
}