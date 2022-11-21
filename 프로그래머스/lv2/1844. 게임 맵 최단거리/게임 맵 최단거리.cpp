#include<vector>
#include<queue>

using namespace std;

bool visit[101][101];
int range[101][101];
queue<pair<int,int>> q;

int xrange[4] = {-1,1,0,0};
int yrange[4] = {0,0,-1,1};
void bfs(int x, int y, int n, int m, vector<vector<int> > maps)
{
    visit[x][y] = true;
    q.push(make_pair(x,y));
    range[x][y]++;
    
    while(!q.empty())
    {
        int xfront = q.front().first;
        int yfront = q.front().second;
        q.pop();
        
        for(int i = 0; i<4; i++)
        {
            int x2 = xfront+xrange[i];
            int y2 = yfront+yrange[i];
            
            if((x2 >=0 && x2 < n) &&(y2 >=0 && y2 < m) && !visit[x2][y2] && maps[x2][y2] == 1 )
            {
                visit[x2][y2] = true;
                q.push(make_pair(x2, y2));
                range[x2][y2] = range[xfront][yfront] +1;
            }
        }
    }
}
int solution(vector<vector<int> > maps)
{
    int n = maps.size();
    int m = maps[0].size();
    
    bfs(0,0,n,m, maps);
    
    int answer = range[n-1][m-1];

    if(answer == 0)
        return -1;
    return answer;
}