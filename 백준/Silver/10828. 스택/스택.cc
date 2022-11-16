#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<int> stack;
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
				cout << stack.top() << "\n";
				stack.pop();
			}
		}

		if (tmp == "top")
		{
			if (stack.empty() == true)
				cout << -1 << "\n";
			else
			{
				cout << stack.top() << "\n";
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