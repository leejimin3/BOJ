#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int arr[10];
bool bisused[10];
vector<int> vec;

// k 는 선택한 갯수
void BT(int k)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	int last = 0;
	for (int i = 0; i < N; i++) 
	{
		if (!bisused[i] && last != vec[i])
		{
			bisused[i] = true;
			arr[k] = vec[i];
			last = arr[k];
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
	cin >> N >> M;
	int tmp;
	for (int i = 0; i < N; i++)
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