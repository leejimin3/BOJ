#include <string>
#include <vector>

using namespace std;

int answer = 0;
bool visit[9];

void Func(int cnt, int k, vector<vector<int>> &dungeons)
{
    if(cnt > answer) answer = cnt;
    
    for(int i = 0; i < dungeons.size(); i++)
    {
        if(!visit[i] && k >= dungeons[i][0])
        {
            visit[i] = true;
            Func(cnt + 1, k - dungeons[i][1], dungeons);
            visit[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    
    Func(0, k, dungeons);
    
    return answer;
}