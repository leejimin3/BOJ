#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int Testcase; cin >> Testcase;

	for (int testcasenum = 0; testcasenum < Testcase; testcasenum++)
	{
		int car_price; cin >> car_price;
		int optionnum; cin >> optionnum;
		
		int price = car_price;

		for (int i = 0; i < optionnum; i++)
		{
			int op_cnt; cin >> op_cnt;
			int op_price; cin >> op_price;

			price += op_cnt * op_price;
		}
		
		cout << price << "\n";
	}

	return 0;
}