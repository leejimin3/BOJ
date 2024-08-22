// 서로다른 양의 정수로 이뤄진 수열
// 1000000보다 작은 자연수 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> vec;
int x;
int res;

void solution()
{
	int front = 0 , end = n-1;
	while (front < end)
	{
		int sum = vec[front] + vec[end];

		if (sum == x)
		{
			res++;
			front++;
			continue;
		}
		else if(sum > x)
		{
			end--;
		}
		else
		{
			front++;
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;

		vec.emplace_back(temp);
	}

	sort(vec.begin(), vec.end());

	cin >> x;

	solution();

	cout << res << "\n";

	return 0;
} 