#include <iostream>

using namespace std;

int SwitchNum;
int StuNum;
bool lis[101] = { false };

void manfunc(int num)
{
	for (int i = 1; i <= SwitchNum; i++)
	{
		if (i % num == 0)
		{
			lis[i] = !lis[i];
		}
	}
}

void girlfunc(int num)
{
	lis[num] = !lis[num];
		
	int cnt = 1;
	while (1)
	{
		int L = num - cnt; int R = num + cnt;
		if (L < 1 || R > SwitchNum)
		{
			break;
		}
		if (lis[L] != lis[R])
		{
			break;
		}

		lis[L] = !lis[L]; lis[R] = !lis[R];
		cnt++;
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> SwitchNum;
	for (int i = 1; i <= SwitchNum; i++)
	{
		cin >> lis[i];
	}

	cin >> StuNum;
	for (int i = 0; i < StuNum; i++)
	{
		int gender; int missonnum;
		cin >> gender >> missonnum;

		if (gender == 1)
		{
			manfunc(missonnum);
		}
		else
		{
			girlfunc(missonnum);
		}
	}

	for (int i = 1; i <= SwitchNum; i++)
	{
		cout << lis[i] << " ";
		if (i % 20 == 0)
		{
			cout << "\n";
		}
	}

	return 0;
} 