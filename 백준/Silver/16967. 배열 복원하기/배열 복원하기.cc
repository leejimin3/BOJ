#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int H,W,X,Y;

int smallfield[301][301];
int largefield[601][601];


int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> H >> W >> X >> Y;

	for (int i = 0; i < H+X; i++)
	{
		for (int j = 0; j < W+Y; j++)
		{
			cin >> largefield[i][j];
		}
	}

	for (int i = X; i < H+X; i++)
	{
		for (int j = Y; j < W+Y; j++)
		{
			largefield[i][j] -= largefield[i - X][j - Y];
		}
	}

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << largefield[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
} 