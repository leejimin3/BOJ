#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	int M;
	cin >> M;
	int ans = 1;
	int X, Y;
	for (int i = 0; i < M; i++)
	{
		cin >> X >> Y;
		if (X == ans)
		{
			ans = Y;
		}
		else if (Y == ans)
		{
			ans = X;
		}
	}

	cout << ans;

	return 0;
}