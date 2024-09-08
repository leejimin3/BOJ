#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N , sum;
vector<int> vec1;
vector<int> vec2;

void Input()
{
	cin >> N;
	int tmp;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec1.emplace_back(tmp);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec2.emplace_back(tmp);
	}

	sort(vec1.begin(), vec1.end());
	sort(vec2.rbegin(), vec2.rend());
}

void Output()
{
	cout << sum << "\n";
}

void Solution()
{	
	for (int i = 0; i < N; i++)
	{
		sum += vec1[i] * vec2[i];
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}