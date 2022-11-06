#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int N;
	cin >> N;
	vector<string> vec;

	for (int i = 0; i < 10000001; i++)
	{
		if (to_string(i).find("666") != string::npos)
			vec.emplace_back(to_string(i));

		if(vec.size() == 10000)
			break;
	}


	cout << vec[N-1] << "\n";
	
	return 0;
}