#include<vector>
#include<queue>
#include<iostream>
using namespace std;

int field[101][101];
int visit[101][101];

int nodex[4] = {-1, 0, 1, 0};
int nodey[4] = {0, -1, 0, 1};

void BFS(vector<vector<int> > maps, int xx, int yy)
{
    visit[0][0] = 1;
    field[0][0] = 1;
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int NodeX = x + nodex[i];
            int NodeY = y + nodey[i];
            if( NodeX >= xx || NodeY >= yy || NodeX < 0 || NodeY < 0 || visit[NodeX][NodeY] == 1 || maps[NodeX][NodeY] != 1) continue;
            {
                
            }
            visit[NodeX][NodeY] = 1;
            field[NodeX][NodeY] = field[x][y] + 1;
            q.push(make_pair(NodeX, NodeY));
        }
    }
}


int solution(vector<vector<int> > maps)
{
    int x = maps.size();
    int y = maps[0].size();
    BFS(maps,x,y);
    
    int answer = field[x-1][y-1];
    if(answer == 0)
    {
        answer = -1;
    }
    return answer;
}