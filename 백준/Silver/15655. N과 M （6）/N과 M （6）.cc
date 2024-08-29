//#include <bits/stdc++.h>

// BT 푸는법
/*
* 1. 숫자를 정의하는 arr배열, 사용됐는지를 확인하는 isused배열을 선언
* 2. Input을 받은 수 BT함수 정의. 파라미터는 현재 사용한 숫자의 수(k)
* 3. 재귀 쓰면서 k가 원하는 수가 되었으면 출력 후 return

*/

#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int N, M;
int field[10];
int arr[10];
bool isused[10];

set<vector<int>> Set;
void Output();

// k 는 선택한 갯수
void BT(int k)
{
	if (k == M)
	{
		vector<int> vec;
		for (int i = 0; i < M; i++)
		{
			vec.emplace_back(arr[i]);
		}

		sort(vec.begin(), vec.end());
		Set.insert(vec);
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!isused[i])
		{
			arr[k] = field[i-1];
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

	for (int i = 0; i < N; i++)
	{
		cin >> field[i];
	}
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