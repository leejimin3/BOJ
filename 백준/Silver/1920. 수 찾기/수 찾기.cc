#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,M;
int list[100001];

void Search(int tmp)
{
	int low= 0, mid, high = N-1;

	while (high >= low)
	{
		mid = (low+high)/2;
		if (list[mid] == tmp)
		{
			cout << 1 << "\n";
			return;
		}
		else if (list[mid] > tmp)
		{
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}

	cout << 0 << "\n";
	return;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int tmp;


	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		list[i] = tmp;
	}

	sort(list, list+N);

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		Search(tmp);
	}


	return 0;
}