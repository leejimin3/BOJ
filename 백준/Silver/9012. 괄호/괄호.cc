#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	cin.ignore();

	for(int t = 0; t<T; t++)
	{
		stack<char> stack;

		string tmp;
		getline(cin, tmp);
		bool flag = false;

		if (tmp[0] == '.')
			return 0;

		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] == '(')
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
		}

		if (stack.empty() == false || flag == true)
		{
			cout << "NO" << "\n";
		}
		else
		{
			cout << "YES" << "\n";
		}

	}

}