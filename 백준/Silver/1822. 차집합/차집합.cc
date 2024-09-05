#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int cnt;
int A[500001];
int B[500001];
vector<int> vec;


void Input()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> B[i];
	}

	sort(A, A + n);
	sort(B, B + m);
}

void Output()
{
	cout << cnt << "\n";
	for (const auto& i : vec)
	{
		cout << i << " ";
	}
}

void Solution()
{	
	for (int i = 0; i < n; i++)
	{
		int target = A[i];
		int start = 0; int end = m - 1;
		bool flag = false;
		
		while (start <= end)
		{
			int mid = (start + end) / 2;

			if (B[mid] == target)
			{
				flag = true;
				break;
			}

			else if (B[mid] > target)
			{
				end = mid - 1;
			}

			else
			{
				start = mid + 1;
			}
		}

		if (flag == false)
		{
			cnt++;
			vec.emplace_back(target);
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