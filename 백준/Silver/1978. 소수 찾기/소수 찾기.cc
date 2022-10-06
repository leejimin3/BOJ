#include <iostream>
#include <math.h>


using namespace std;


bool check(int num)
{
	bool check = false;

	if(num == 1)
		return true;
	
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			check = true;
	}

	if(check == true)
		return true;
	else
		return false;
}


int main(int argc, char* argv[])
{
	int cnt, ans = 0;
	cin >> cnt;

	int* num = new int[cnt];

	for (int i = 0; i < cnt; i++)
	{
		cin >> num[i];
		if (check(num[i]) == false)//소수인지 체크
		{
			ans++;
		}
		
	}
	cout << ans;

}