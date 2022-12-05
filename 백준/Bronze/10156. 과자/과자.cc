#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	int K, N, M;
	cin >> K >> N >> M;
	
	if((K * N) - M > 0)
		cout << (K*N)-M << "\n";
	else
		cout << 0 << "\n";
}