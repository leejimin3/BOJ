#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int arr[10];
bool isused[10];
vector<int> vec;

// k 는 선택한 갯수
void BT(int k)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";

		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (!isused[i])
		{
			if (k != 0 && arr[k - 1] >= vec[i]) continue;
			arr[k] = vec[i];
			isused[i] = true;
			BT(k + 1);
			isused[i] = false;
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


int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	return 0;
}