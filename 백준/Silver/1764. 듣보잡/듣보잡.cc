#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> Dlist, Blist, DBlist;

bool BinarySearch(string target)
{
	int low = 0, high = Blist.size()-1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if(target == Blist[mid]) return true;

		if(target < Blist[mid]) high = mid-1;

		else if(target > Blist[mid]) low = mid +1;
	}
	return false;
}

int main(int argc, char* argv[]) {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, cnt = 0;
	string tmp;

	cin >> N >> M;

	for (int i = 0; i < N; i++) { cin >> tmp; Dlist.emplace_back(tmp); }
	sort(Dlist.begin(), Dlist.end());

	for (int i = 0; i < M; i++) { cin >> tmp; Blist.emplace_back(tmp); }
	sort(Blist.begin(), Blist.end());

	for (auto i : Dlist)
	{
		if(BinarySearch(i)) { cnt++; DBlist.emplace_back(i); };
	}

	cout << cnt << "\n";
	for(auto i : DBlist) cout << i << "\n";


	return 0;
}