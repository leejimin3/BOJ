#include <iostream>
#include <string.h>
#include <map>

using namespace std;

string Upper(string x)
{
	for (int i = 0; i < x.size(); i++)
	{
		x[i] = toupper(x[i]);
	}

	return x;
}


map<char, int> ADDMaps(map<char, int> maps, string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		maps[str[i]] += 1;
	}

	return maps;
}

char Find_Max_Maps(map<char, int> maps)
{
	char max = 'a';
	int cnt = 0;
	for (map<char, int>::iterator itr = maps.begin(); itr != maps.end(); itr++)
	{
		if(itr->second == cnt) { max = '?' ;}
		if(itr->second > cnt) {
			cnt = itr->second;
			max = itr->first;
		}

	}

	return max;
}



int main() {
	
	map<char, int> maps;

	string str;
	cin >> str;

	str = Upper(str); //소문자 -> 대문자

	maps = ADDMaps(maps, str); //map에 해당 문자열 추가

	cout << Find_Max_Maps(maps); // 가장 큰 문자 찾기



}