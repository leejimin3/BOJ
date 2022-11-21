#include <string>
#include <vector>

using namespace std;

bool visit[201];
int sum = 0;
void dfs(int x, vector<vector<int>> computers)
{
    visit[x] = true;
    for(int i = 0; i < computers[x].size(); i++)
    {
        if(computers[x][i] == 1 && !visit[i])
            dfs(i, computers);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i = 0 ; i < n; i++)
    {
        if(!visit[i])
        {
            sum++;
            dfs(i,computers);
        }
    }
    answer = sum;
    return answer;
}