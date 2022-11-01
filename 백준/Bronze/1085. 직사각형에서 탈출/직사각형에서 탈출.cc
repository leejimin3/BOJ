#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x,y, w, h;

	int hor = 0, ver  = 0;

	cin >> x >> y >> w >> h;

	if (w-x < x)
	{
		hor = w-x;
	}
	else
	{
		hor  = x;
	}


	if (h-y < y)
	{
		ver = h-y;
	}
	else
	{
		ver = y;
	}

	cout << min(hor,ver);

	return 0;

}
