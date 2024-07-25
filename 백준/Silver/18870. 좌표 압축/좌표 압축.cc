#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N; int cnt;
vector<long long> vec;
vector<long long> vec2;
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		long long tmp; cin >> tmp;
		vec.emplace_back(tmp);
		vec2.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for (int i = 0; i < N; i++)
	{
		cout << lower_bound(vec.begin(), vec.end(), vec2[i]) - vec.begin() << "\n";
	}

	return 0;
} 