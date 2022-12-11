#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	string A = "";
	string B = "";


	cin >> A >> B;

	if(A.length() >= B.length())
		cout << "go";
	else
		cout << "no";

	return 0;
}