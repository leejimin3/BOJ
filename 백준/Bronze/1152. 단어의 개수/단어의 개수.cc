#include <iostream>
#include <string>
using namespace std;


int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word;
	int num = 0; bool flag = true;
	getline(cin, word);

	for (int i = 0; i < word.length(); i++)
	{	
		if (word[i] == ' ')
		{
			flag = true;
		}
		else if (flag)
		{
			flag = false;
			num++;
		}
	}
	cout << num;
	return 0;

	}