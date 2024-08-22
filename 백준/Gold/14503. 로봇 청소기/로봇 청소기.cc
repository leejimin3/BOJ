

/*
* 로봇 청소기가ㅏ 있는 방은 N x M 크기의 직사각형
* 동서남북 방향
* 방의 좌표는 (r,c). 북서쪽 끝 (0,0), 남동쪽 끝(N-1, M-1)
* 
* 로봇 청소기 작동
* 1. 현재칸이 청소 X면 청소
* 2. 주변 4칸 탐색. 만약 청소가 다됐으면
* 3. 방향유지 뒤로 1칸이동. 그리고 1번부터
* 4. 후진할 수 없다면 작동 중지
* 
* 5. 만약 청소 안된곳이 있따면
* 6. 반시계로 90도 회전
* 7. 앞쪽 칸이 청소되지 않았을 경우 한칸 전진
* 8. 1번부터 진행
* 
* 입력은 N, M 3이상 50이하, 처음 로봇청소기의 위치 r,c. 방향 d. (d가 0=북. 1=동, 2=남, 3=서)
* 
*/

#include <iostream>

using namespace std;

int field[50][50];
int visit[50][50] = { 0,};

int nodex[4] = { -1, 0, 1, 0 };
int nodey[4] = { 0, 1, 0, -1 };

int N, M, r, c, d;
int res;

void solution()
{
	for (int i = 0; i < 4; i++)
	{
		int newrot = (d + 3 - i) % 4;
		int NodeX = r + nodex[newrot];
		int NodeY = c + nodey[newrot];

		//왼쪽방향을 갈수있는지 검사
		if (NodeX < 0 || NodeX >= N || NodeY < 0 || NodeY >= M || field[NodeX][NodeY] == 1)
		{
			continue;
		}

		if (field[NodeX][NodeY] == 0 && visit[NodeX][NodeY] == 0)
		{
			visit[NodeX][NodeY] = 1;
			r = NodeX;
			c = NodeY;
			d = newrot;
			res++;
			solution();
		}
	}
	
	int backrot = d > 1 ? d - 2 : d + 2;
	int BackNodeX = r + nodex[backrot];
	int BackNodeY = c + nodey[backrot];
	if (BackNodeX >= 0 || BackNodeX <= N || BackNodeY >= 0 || BackNodeY <= M)
	{
		if (field[BackNodeX][BackNodeY] == 0)
		{
			r = BackNodeX;
			c = BackNodeY;
			solution();
		}
		else
		{
			cout << res << "\n";
			exit(0);
		}
	}
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;
	cin >> r >> c >> d;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> field[i][j];
		}
	}

	visit[r][c] = 1;
	res++;

	solution();

	return 0;
} 