#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N, tmp, num = 1, index = 0;
	bool can = true;
	cin >> N;

	stack<int> stack;
	vector<int> vec;
	vector<char> answer;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	while (index < vec.size())
	{
		if (stack.empty() == true)
		{
			for (int i = num; i <= vec[index]; i++)
			{
				stack.push(num);
				answer.emplace_back('+');
				num++;
			}
			stack.pop();
			answer.emplace_back('-');
			index++;
		}

		else if (vec[index] > stack.top())
		{
			if (vec[index] < num)
			{
				can = false;
				break;
			}
			int save = stack.top();
			for (int i = num; i <= vec[index]; i++)
			{
				stack.push(num);
				answer.emplace_back('+');
				num++;
			}
			stack.pop();
			answer.emplace_back('-');
			index++;
		}
		else
		{
			stack.pop();
			answer.emplace_back('-');
			index++;
		}
	}
	if (can == false)
		cout << "NO" << "\n";
	else
	{
		for (auto i : answer)
		{
			cout << i << "\n";
		}
	}

	return 0;

}