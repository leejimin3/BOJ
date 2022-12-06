#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
	
	string tmp;
	stack<char> stack;

	while (1)
	{
		getline(cin, tmp);

		if(tmp == "END")
			break;

		for (int i = 0; i < tmp.size(); i++)
		{
			stack.push(tmp[i]);
		}

		while (stack.empty() != true)
		{
			cout << stack.top();
			stack.pop();
		}

		cout << "\n";
	}
	
}