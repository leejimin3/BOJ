#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int N;
queue<int> q;
stack<int> stk;
void Input()
{
	cin >> N;
	
	int tmp = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		q.push(tmp);
	}
}

void Output()
{

}

void Solution() 
{	
	// 받는 사람 순번
	int order = 1;

	while (N--)
	{
		int tmp = q.front();
		q.pop();

		if (order == tmp)
		{
			order++;
		}
		else
		{
			stk.push(tmp);
		}

		while (!stk.empty() && stk.top() == order)
		{
			stk.pop();
			order++;
		}
	}

	if (!q.empty() || !stk.empty())
	{
		cout << "Sad" << "\n";
	}
	else
	{
		cout << "Nice" << "\n";
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Output();
	return 0;
}