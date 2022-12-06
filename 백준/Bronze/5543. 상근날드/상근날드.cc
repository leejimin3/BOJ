#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
	
	int tmp;
	vector<int> food;
	vector<int> drk;

	for (int i = 0; i < 3; i++)
	{
		cin >> tmp;
		food.emplace_back(tmp);
	}

	for (int i = 0; i < 2; i++)
	{
		cin >> tmp;
		drk.emplace_back(tmp);
	}
	

	cout << *min_element(food.begin(), food.end()) + *min_element(drk.begin(), drk.end())- 50;

	return 0;
}