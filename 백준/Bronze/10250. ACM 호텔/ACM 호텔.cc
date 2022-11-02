#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int T,H, W, N, ans = 0;
	
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;

		if (N % H == 0)
		{
			ans = (H * 100);
			ans += (N / H);
		}

		else
		{
			ans = (N % H) * 100;
			ans += (N / H) +1;
		}



		cout << ans << "\n";


	}
	return 0;
}