#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int N , K;
	cin >> N >> K;
	int tmp;

	queue<int> q;
	vector<int> list;
	for (int i = 0; i < N; i++)
	{
		q.push(i+1);
	}

	while (q.empty() != true)
	{
		for (int i = 0; i < K - 1; i++)
		{
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		list.emplace_back(q.front());
		q.pop();
	}

	cout << "<";
	for (auto i : list)
	{
		if(i == list.back())
			cout << i;
		else
			cout << i << ", ";
	}
	cout << ">";

	return 0;
}