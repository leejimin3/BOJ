#include <iostream>
#include <stack>
using namespace std;

void Find(int M, int N)
{

}



int main() {

	stack<int> stack;
	int K;
	cin >> K;
	int X;
	int sum = 0;

	for (int i = 0; i < K; i++)
	{
		cin >> X;
		if(X == 0)
			stack.pop();
		else
		{
			stack.push(X);
		}
	}


	while (stack.empty() != true)
	{
		sum += stack.top();
		stack.pop();
	}

	cout << sum;

	
	

	return 0;
}