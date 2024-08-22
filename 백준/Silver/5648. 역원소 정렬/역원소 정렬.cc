#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<long long> vec;

// 정수 입력
void Input()
{
	for (int i = 0; i < n; i++)
	{
		long long tmp;  cin >> tmp;
		vec.emplace_back(tmp);
	}
}

void Reverse()
{
	for (int i = 0; i < vec.size(); i++)
	{
		long long tmp = 0;

		while (vec[i] != 0)
		{
			tmp *= 10;
			tmp += vec[i] % 10;
			vec[i] /= 10;
		}

		vec[i] = tmp;
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	Input();
	Reverse();

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}

	return 0;
} 