#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct student
{
	string Name;
	int kor;
	int eng;
	int mat;
};

int N;
vector<student> vec;

// 입력부
void Input()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		student stu;
		cin >> stu.Name >> stu.kor >> stu.eng >> stu.mat;
		vec.emplace_back(stu);
	}
}

// 정렬식
bool cmp(student& x, student& y)
{
	if(x.kor != y.kor)
		return x.kor > y.kor;
	if (x.eng != y.eng)
		return x.eng < y.eng;
	if (x.mat != y.mat)
		return x.mat > y.mat;
	return x.Name < y.Name;
}

// 풀이
void Solution()
{
	sort(vec.begin(), vec.end(), cmp);
}

// 출력부
void Print()
{
	for (int i = 0; i < N; i++)
	{
		cout << vec[i].Name << "\n";
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	Print();
}