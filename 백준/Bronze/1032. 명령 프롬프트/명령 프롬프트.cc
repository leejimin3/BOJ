#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{

	int num;
	cin >> num;

	char tmp;
	bool match = false;


	string answer;
	string list[51];

	for (int i = 0; i < num; i++)
	{
		cin >> list[i];
	}

	for (int k = 0; k<list[0].length(); k++)
	{ 
		for (int i = 1; i < num; i++)
		{
			if (list[i][k] != list[0][k])
			{
				answer.push_back('?');
				match = true;
				break;
			}
		}
		if(match == false)
			answer.push_back(list[0][k]);

		match = false;
	}

	cout << answer;
	return 0;
}