#include <iostream>
#include <vector>

using namespace std;

vector<int> primes;
bool check[40000001];
int startp, endp;
int N, cnt, sum;

void primeFunc(int num)
{
	for (int i = 2; i <= num; i++)
	{
		if (!check[i])
		{
			primes.emplace_back(i);
			for (int j = i; j <= num; j += i)
			{
				check[j] = true;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	primeFunc(N);

	for (int i = 0; i < primes.size(); i++)
	{
		for (int j = i; j < primes.size(); j++)
		{
			sum += primes[j];
			if (sum > N)
			{
				sum = 0;
				break;
			}

			if (sum == N)
			{
				cnt++;
				break;
			}
		}
	}

	cout << cnt << "\n";

	return 0;
}