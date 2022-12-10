#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
	
	vector<int> vec;
	int sum = 0, min = 101;
	int tmp;
	for (int i = 0; i < 7; i++)
	{
		cin >> tmp;
		if (tmp % 2 != 0) 
		{
			vec.emplace_back(tmp);
			sum += tmp;
			if(min > tmp)	min = tmp;
		}
	}
	if(vec.empty() == true)
		cout << -1;
	else
	{
		cout << sum << "\n" << min << "\n";
	}
	

	return 0;
}