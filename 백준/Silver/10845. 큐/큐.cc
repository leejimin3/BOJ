#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	queue<int> stack;
	int N; string tmp; int tmpnum;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (tmp == "push")
		{
			cin >> tmpnum;
			stack.push(tmpnum);
		}

		if (tmp == "pop")
		{
			if(stack.empty() == true)
				cout << -1 << "\n";
			else
			{
				cout << stack.front() << "\n";
				stack.pop();
			}
		}

		if (tmp == "front")
		{
			if (stack.empty() == true)
				cout << -1 << "\n";
			else
			{
				cout << stack.front() << "\n";
			}
			
		}

		if (tmp == "back")
		{
			if (stack.empty() == true)
				cout << -1 << "\n";
			else
			{
				cout << stack.back() << "\n";
			}

		}

		if (tmp == "size")
		{
			cout << stack.size() << "\n";
		}

		if (tmp == "empty")
		{
			cout << stack.empty() << "\n";
		}
	}

    return 0;
}