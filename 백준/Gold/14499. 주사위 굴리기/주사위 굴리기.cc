#include <iostream>
#include <vector>

using namespace std;

// 명령 모음
vector<int> order;

int Dice[6] = {0,};

// 필드
int field[22][22];

// 지도
int N, M;

// 주사위
int x, y;

// 명령수
int K;

//공백 - 동 - 서 - 북 - 남
int nodex[5] = { 0, 0, 0, -1, 1 };
int nodey[5] = { 0, 1, -1, 0, 0 };

void Input()
{
	cin >> N >> M >> x >> y >> K;

	// 필드채우기
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> field[i][j];
		}
	}

	// 명령 입력
	int tmp;
	for (int i = 0; i < K; i++)
	{
		cin >> tmp;
		order.emplace_back(tmp);
	}
}

void Output()
{
	cout << Dice[0] << "\n";
}

bool IsOutOfBound(int num)
{
	int x1 = x + nodex[num];
	int y1 = y + nodey[num];
	//cout << x1 << y1 << "\n";
	if (x1 < 0 || y1 < 0 || x1 >= N || y1 >= M) return true;

	return false;
}

// 1 - 동 , 2 - 서 , 3 - 북, 4- 남
// 0 - 위 , 1 - 아래, 2 - 동 , 3 - 서, 4 - 남, 5 - 북
void MoveDice(int order)
{
	int tmp;
	switch (order)
	{
	case 1:
		y++;
		tmp = Dice[0];
		Dice[0] = Dice[3];
		Dice[3] = Dice[1];
		Dice[1] = Dice[2];
		Dice[2] = tmp;
		break;
	case 2:
		y--;
		tmp = Dice[0];
		Dice[0] = Dice[2];
		Dice[2] = Dice[1];
		Dice[1] = Dice[3];
		Dice[3] = tmp;
		break;
	case 3:
		x--;
		tmp = Dice[0];
		Dice[0] = Dice[4];
		Dice[4] = Dice[1];
		Dice[1] = Dice[5];
		Dice[5] = tmp;
		break;
	case 4:
		x++;
		tmp = Dice[0];
		Dice[0] = Dice[5];
		Dice[5] = Dice[1];
		Dice[1] = Dice[4];
		Dice[4] = tmp;
		break;
	}
}

void SwapNumber()
{
	if (field[x][y] == 0)
	{
		field[x][y] = Dice[1];
	}
	else
	{
		Dice[1] = field[x][y];
		field[x][y] = 0;
	}
}

void Solution()
{
	for (int i = 0; i < order.size(); i++)
	{
		int neworder = order[i];

		if (IsOutOfBound(neworder)) continue;

		MoveDice(neworder);
		SwapNumber();
		Output();
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	Input();
	Solution();
	return 0;
}