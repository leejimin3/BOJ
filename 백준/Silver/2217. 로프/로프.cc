#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N; int tmp;
vector<int> vec;
vector<int> weightvec;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int weight = 0;
	int sum = 0;
	int newweight = 0; 

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
		weightvec.emplace_back(0);
	}

	sort(vec.rbegin(), vec.rend());

	for (int i = 0; i < N; i++)
	{
		weightvec[i] = vec[i] * (i + 1);
	}

	sort(weightvec.rbegin(), weightvec.rend());

	cout << weightvec[0] << "\n";

	return 0;
}