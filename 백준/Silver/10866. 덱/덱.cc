#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	deque<int> stack;
	int N; string tmp; int tmpnum;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (tmp == "push_front")
		{
			cin >> tmpnum;
			stack.push_front(tmpnum);
		}

		if (tmp == "push_back")
		{
			cin >> tmpnum;
			stack.push_back(tmpnum);
		}

		if (tmp == "pop_front")
		{
			if(stack.empty() == true)
				cout << -1 << "\n";
			else
			{
				cout << stack.front() << "\n";
				stack.pop_front();
			}
		}

		if (tmp == "pop_back")
		{
			if (stack.empty() == true)
				cout << -1 << "\n";
			else
			{
				cout << stack.back() << "\n";
				stack.pop_back();
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