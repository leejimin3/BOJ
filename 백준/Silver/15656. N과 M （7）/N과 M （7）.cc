#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;
vector<int> arr;

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
		arr.emplace_back(vec[i]);
		BT(k + 1);
		arr.pop_back();
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