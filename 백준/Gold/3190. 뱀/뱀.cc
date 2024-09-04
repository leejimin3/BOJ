#include <iostream>
#include <queue>

using namespace std;

// 뱀 영역 (좌표)
queue <pair<int, int>> q;

// 뱀 진행 방향 (초기화 오른쪽)
pair<int, int> dir = {0, 1};

// 뱀위 위치 (초기화 0,0)
pair<int, int> pos = { 0, 0 };

// 명령 (시간, 명령)
queue<pair<int, char>> order;

// 필드
int field[102][102];

// 타일 크기, 사과 개수
int N, K;

// 변환 횟수
int L;

// 시간 카운트
int cnt = 0;

void Input()
{
	cin >> N >> K;

	int tmp1, tmp2;
	for (int i = 0; i < K; i++)
	{
		cin >> tmp1 >> tmp2;
		field[tmp1-1][tmp2-1] = 1;
	}

	cin >> L;

	int tmp; char chr;
	for (int i = 0; i < L; i++)
	{
		cin >> tmp >> chr;
		order.push({ tmp, chr});
	}
}

void Output()
{
	cout << cnt << "\n";
}

bool IsCrash(pair<int,int> pos)
{
	for (int i = 0; i < q.size(); i++)
	{
		pair<int, int> tmp = q.front();
		q.pop();

		if (tmp == pos)
		{
			return true;
		}
			

		q.push(tmp);
	}

	return false;
}


void CheckDir()
{
	char rot = ' ';
	for (int i = 0; i < order.size(); i++)
	{
		pair<int, char> tmp = order.front();
		order.pop();

		if (cnt == tmp.first)
		{
			rot = tmp.second;
		}

		order.push({ tmp.first, tmp.second });
	}

	if (rot == ' ')
	{
		return;
	}
		

	int x = dir.first;
	int y = dir.second;

	if (rot == 'L')
	{
		//동
		if (x == 0 && y == 1)
		{
			dir.first = -1;
			dir.second = 0;
		}
		//서
		else if(x == 0 && y == -1)
		{
			dir.first = 1;
			dir.second = 0;
		}
		//북
		else if (x == -1 && y == 0)
		{
			dir.first = 0;
			dir.second = -1;
		}
		//남
		else if (x == 1 && y == 0)
		{
			dir.first = 0;
			dir.second = 1;
		}
	}
	else
	{
		//동
		if (x == 0 && y == 1)
		{
			dir.first = 1;
			dir.second = 0;
		}
		//서
		else if (x == 0 && y == -1)
		{
			dir.first = -1;
			dir.second = 0;
		}
		//북
		else if (x == -1 && y == 0)
		{
			dir.first = 0;
			dir.second = 1;
		}
		//남
		else if (x == 1 && y == 0)
		{
			dir.first = 0;
			dir.second = -1;
		}
	}
}

void Solution()
{
	q.push({ 0,0 });
	while (1)
	{
		cnt++;
		int x1 = pos.first + dir.first;
		int y1 = pos.second + dir.second;
			
		//cout << x1 << y1 << "\n";
			
		// 충돌 시 리턴
		if (IsCrash({ x1,y1 }) || x1 >= N || y1 >= N || x1 < 0 || y1 < 0)
		{
			return;
		}

		q.push({ x1, y1 });
		pos.first = x1;
		pos.second = y1;

		// 사과가 없다면 길이 줄이기
		if (field[x1][y1] != 1)
		{
			q.pop();
		}
		else
		{
			field[x1][y1] = 0;
		}

		CheckDir();
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	
	Solution();
	Output();
	return 0;
}