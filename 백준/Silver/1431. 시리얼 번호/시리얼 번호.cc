#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector <string> vec;

// string내의 숫자를 더해 반환해주는 함수
int Numsum(string str)
{
	int sum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		int tmp = str[i] - 48;
		if (tmp <= 9 && tmp >= 0)
		{
			sum += tmp;
		}
	} 

	return sum;
}

// 어떤 것이 더 큰지 반환해주는 함수. true면 x가 앞.
bool solution(string x, string y)
{
	if (x.length() > y.length())
	{
		return false;
	}
	else if (x.length() < y.length())
	{
		return true;
	}

	else
	{
		int xsum = Numsum(x), ysum = Numsum(y);

		if (xsum > ysum)
		{
			return false;
		}
		else if (xsum < ysum)
		{
			return true;
		}
		else
		{
			string tmp = max(x,y);

			if (tmp == x)
			{
				return false;
			}
			else if (tmp == y)
			{
				return true;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string tmp; cin >> tmp;
		vec.emplace_back(tmp);
	}

	for (int i = 0; i < N-1; i++)
	{
		for (int j = i; j < N; j++)
		{
			bool result = solution(vec[i], vec[j]);

			if (result)
			{
				continue;
			}

			string temp = vec[i];
			vec[i] = vec[j]; vec[j] = temp;
		}
	}

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}

	return 0;
} 