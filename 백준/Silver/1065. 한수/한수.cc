#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int han(int a)
{
	bool flag = false;
	int cnt = 0;
	for (int i = 1; i <= a; i++)
	{
		if (i - 100 >= 0)
		{
			if(i / 100 - i / 10 % 10 != i / 10 % 10 - i%10)
				flag = true;
		}
		if (flag == false)
			cnt++;

		flag = false;
	}
	return cnt;
}

int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;

	cout << han(a) << "\n";
	return 0;

}