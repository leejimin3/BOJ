#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	int L,A,B,C,D;

	cin >> L >> A >> B >> C >> D;

	cout << L-max( (A%C ==0) ? (A/C) : (A/C+1) , (B%D == 0) ? (B/D) : (B/D+1));

}