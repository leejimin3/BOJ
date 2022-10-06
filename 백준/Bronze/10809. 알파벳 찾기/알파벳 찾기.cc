#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string A;
	cin >> A;

	int cnt[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	char list[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z' };

	for (int i = 0; i < A.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (list[j] == A[i])
				if(cnt[j] == -1)
					cnt[j] = i;

		}
	}

	for (int i = 0; i < 26; i++)
		cout << cnt[i] << " ";



	return 0;

}