#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int L, C;
vector<char> vec;
char arr[16];
bool bisused[16];
char str[5] = { 'a', 'e', 'i', 'o', 'u' };

// k 는 선택한 갯수
void BT(int k)
{
	if (k == L)
	{
		int cnt = 0;
		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (arr[i] == str[j])
				{
					cnt++;
				}
			}
		}

		if (cnt > 0 && cnt <= L - 2)
		{
			for (int i = 0; i < L; i++)
			{
				cout << arr[i];
			}
			cout << "\n";
		}

		return;
	}

	for (int i = 0; i < C; i++)
	{
		if (!bisused[i])
		{
			if (k != 0 && arr[k - 1] >= vec[i]) continue;

			bisused[i] = true;
			arr[k] = vec[i];
			BT(k + 1);
			bisused[i] = false;
		}
	}
}


void Solution()
{
	BT(0);
}

void Input()
{
	cin >> L >> C;
	char tmp;
	for (int i = 0; i < C; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end());
}

//void Output()
//{
//}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	//Output();
	return 0;
}