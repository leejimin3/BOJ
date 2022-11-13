#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (1)
	{
		stack<char> stack;

		string tmp;
		getline(cin, tmp);
		bool flag = false;

		if (tmp[0] == '.')
			return 0;

		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] == '(' || tmp[i] == '[')
			{
				stack.push(tmp[i]);
			}

			if (tmp[i] == ')')
			{
				if (stack.empty() == true || stack.top() != '(')
				{
					flag = true;
					break;
				}
				else
				{
					stack.pop();
				}
			}

			if (tmp[i] == ']')
			{
				if (stack.empty() == true || stack.top() != '[')
				{
					flag = true;
					break;
				}
				else
				{
					stack.pop();
				}
			}


		}

		if (stack.empty() == false || flag == true)
		{
			cout << "no" << "\n";
		}
		else
		{
			cout << "yes" << "\n";
		}

	}

}