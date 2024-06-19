#include <iostream>
#include <queue>
#include <string>

using namespace std;

int N;
string tmp;
vector<char> vec;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++)
	{
		int maxcount = 0;
		int arr[26] = {0,};
		int maxnum = 0;
		int maxidx = 0;

		getline(cin, tmp);
		for (int j = 0; j < tmp.length(); j++)
		{
			if (tmp[j] >= 97 && tmp[j] < 123)
			{
				arr[tmp[j] - 97] += 1;
			}
		}

		for (int j = 0; j < 26; j++)
		{
			if (arr[j] > maxnum)
			{
				maxnum = arr[j];
				maxidx = j;
			}
		}

		for (int j = 0; j < 26; j++)
		{
			if (arr[j] == maxnum)
			{
				maxcount++;
			}
		}

		if (maxcount == 1)
		{
			vec.emplace_back(char(maxidx + 97));
		}
		else
		{
			vec.emplace_back('?');
		}
	}

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}
	return 0;
}