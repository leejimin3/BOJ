#include <iostream>
#include <queue>
using namespace std;



int main() {

	int num;
	cin >> num;
	int tmp;
	queue<int> q;

	for (int i = 1; i <= num; i++)
	{
		q.push(i);
	}

	while (q.size()!=1)
	{
		q.pop();
		tmp = q.front();
		q.pop();
		q.push(tmp);
	}

	cout<<q.back();

	return 0;
}