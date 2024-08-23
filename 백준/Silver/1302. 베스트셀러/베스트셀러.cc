#include <iostream>
#include <map>

using namespace std;

int N;
map<string, int> Map;
string ans;
// 입력부
void Input()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string tmp; cin >> tmp;
		Map[tmp]++;
	}
}

// 풀이
void Solution()
{
	int max = 0;

	for (auto i = Map.begin(); i != Map.end(); i++)
	{
		if (i->second > max)
		{
			ans = i->first;
			max = i->second;
		}
	}
}

// 출력부
void Print()
{
	cout << ans << "\n";
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Print();
}