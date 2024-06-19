#include <iostream>
#include <string>
using namespace std;

int N; int cnt = 0;
string word;
//int alp[26];
int main(int argc, char* argv[]) {

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		char prevalp;
		int alp[26] = {0,};
		prevalp = word[0];
		bool F = false;
		alp[prevalp - 97]++;
		for (int j = 1; j < word.length(); j++)
		{
			//cout << alp[word[j]-97] << "\n";
			if (alp[word[j] - 97] >= 1 && prevalp != word[j])
			{
				F = true;
				break;
			}
			else
			{
				alp[word[j] - 97]++;
				prevalp = word[j];
			}
		}

		if (!F) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
