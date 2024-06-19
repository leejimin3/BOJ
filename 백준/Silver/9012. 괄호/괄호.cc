#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	
	for(int i = 0; i< N; i++)
	{
		string tmp; cin >> tmp;
		int Lnum = 0, Rnum = 0; bool F = false;

		for (int k = 0; k < tmp.length(); k++)
		{
			if (tmp[k] == '(') Lnum++;
			if (tmp[k] == ')') Rnum++;

			if (Rnum > Lnum)
			{
				F = true;
			}
		}

		if (Rnum != Lnum)
		{
			F = true;
		}

		if (F) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}
	
	

	return 0;
}