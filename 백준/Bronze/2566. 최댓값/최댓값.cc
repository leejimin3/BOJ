#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	int tmp;
	int ans = -1;
	pair<int, int> p;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> tmp;
			if (tmp > ans)
			{
				ans = tmp;
				p = make_pair(i+1,j+1);
			}
		}
	}

	cout << ans << "\n" << p.first << " " << p.second;

}