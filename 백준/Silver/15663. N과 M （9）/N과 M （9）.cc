#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int N, M;
set<vector<int>> Set;
vector<int> vec;
vector<int> arr;
bool bisused[10];

// k 는 선택한 갯수
void BT(int k)
{
	if (k == M)
	{
		Set.insert(arr);

		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (!bisused[i])
		{
			arr.emplace_back(vec[i]);
			bisused[i] = true;
			BT(k + 1);
			arr.pop_back();
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

void Output()
{
	for (const auto& i : Set)
	{
		for (const auto& j : i)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	Input();
	Solution();
	Output();
	return 0;
}