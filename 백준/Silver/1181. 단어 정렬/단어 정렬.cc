#include <iostream>
#include <set>

using namespace std;


struct MyStruct
{
	bool operator() (const string& left, const string& right) const
	{
		if (left.size() == right.size())
		{
			return left < right;
		}

		else
		{
			return left.size() < right.size();
		}
	}
};

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int N;
	cin >> N;
	string str;	
	set<string, MyStruct> set;
	
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		set.insert(str);
	}

	for (auto i : set)
	{
		cout << i << "\n";
	}


	return 0;
}