#include <iostream>
#include <vector>

using namespace std;

int n, k;

int DP[10001];
vector<int> vec;

void Input()
{
	cin >> n >> k;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}
}

void Output()
{

	if (DP[k] == 10001)
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << DP[k] << "\n";
	}
}

void Solution()
{	
	for (int i = 1; i <= k; i++)
	{
		DP[i] = 10001;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = vec[i]; j <= k; j++)
		{
			DP[j] = min(DP[j], DP[j - vec[i]]+1);
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}