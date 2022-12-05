#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	int T, tmp, cnt = 0;
	cin >> T;

	for (int i = 0; i < 5; i++)
	{
		cin >> tmp;
		if(tmp == T)
			cnt++;
	}

	cout << cnt << "\n";
	
}