#include <iostream>

using namespace std;

int greedy(int a) {
	
	int money = 1000 - a;
	int cnt = 0;
	int en[6] = {500,100,50,10,5,1};
	
	for(auto i : en)
	{
		if (money >= i)
		{
			cnt += money / i;
			money %= i;
		}
	}

	return cnt;
}


int main() {
	
	int money;
	cin >> money;

	cout << greedy(money);
		
}