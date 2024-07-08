#include <iostream>
#include <vector>
#include <algorithm>	

using namespace std;

int N; int tmp;
vector<int> vec;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < N; i++)
	{
		cout << vec[i] << "\n";
	}
	
	return 0;
}