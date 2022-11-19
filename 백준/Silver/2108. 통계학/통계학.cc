#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int list[8001] = { 0, };

int firstline(vector<int> vec)
{
	double sum = 0;

	for (auto i : vec)
	{
		sum += i;
	}

	return double(round(sum / vec.size()));
}

int secondline(vector<int> vec)
{
	return vec[(vec.size() - 1) / 2];
}

int thirdline(vector<int> vec)
{

	bool flag = false;
	int answer = 0;
	for (auto i : vec)
	{
		list[i + 4000]++;
	}

	int max = *max_element(list, list + 8001);
	//vector<int>index;

	for (int i = 0; i < 8001; i++)
	{
		if (list[i] == max)
		{
			answer = i-4000;
			//index.emplace_back(i - 4000);
			if(flag)
				return answer;
			flag = true;
		}
	}

	return answer;

}

int fourthline(vector<int> vec)
{
	int max = *max_element(vec.begin(), vec.end());
	int min = *min_element(vec.begin(), vec.end());
	return max - min;
}

int main(int argc, char* argv[]) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N, tmp;
	cin >> N;

	vector<int> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.emplace_back(tmp);
	}

	sort(vec.begin(), vec.end());

	//cout << "1. 산술 평균 " << "2. 중앙 값 " << "3, 최빈 값 " << "4. 범위 " << "\n";

	cout << firstline(vec) << "\n";
	cout << secondline(vec) << "\n";
	cout << thirdline(vec) << "\n";
	cout << fourthline(vec) << "\n";

	return 0;

}