#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void Find(int M, int N)
{
	vector<int> save;
	bool flag = false;
	for (int i = M; i <= N; i++)
	{
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
				flag = true;
		}

		if(flag == false && i != 1)
			save.emplace_back(i);
		flag = false;
	}

	if(save.empty() ==true)

		cout << -1 << "\n";
	else
	{
		cout << accumulate(save.begin(), save.end(), 0) << "\n";
		cout << save.front() << "\n";
	}

}



int main() {

	
	int M,N;

	cin >> M >> N;

	Find(M,N);
	

	return 0;
}