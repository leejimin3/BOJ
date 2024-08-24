//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string S, tmp;
vector<string> vec;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> S;

	for (int i = S.length()-1; i >= 0; i--)
	{
		tmp = S[i] + tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < S.length(); i++)
	{
		cout << vec[i] << "\n";
	}

	return 0;
} 