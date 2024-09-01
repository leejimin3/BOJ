#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, Max;
int DP[1002];
int arr[1002];

vector<int> ans;
void Input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}

void Output()
{
	cout << Max << "\n";

	for (const auto& i : ans)
	{
		cout << i << " ";
	}
	cout << "\n";
}

void Solution()
{
	int maxlength = 0, maxidx = 0;
	for (int i = 0; i < N; i++)
	{
		DP[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				DP[i] = max(DP[i], DP[j] + 1);
			}			
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (DP[i] > maxlength)
		{
			maxlength = DP[i];
			maxidx = i;
		}
	}

	ans.emplace_back(arr[maxidx]);
	for (int i = maxidx, j = maxlength-1; i >= 0; i--)
	{
		if (DP[i] == j)
		{
			ans.emplace_back(arr[i]);
			j--;
		}
	}

	sort(ans.begin(), ans.end());
	Max = maxlength;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}