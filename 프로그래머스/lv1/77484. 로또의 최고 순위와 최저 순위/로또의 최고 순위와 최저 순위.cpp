#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int equalcnt = 0;
    int zerocnt = 0;
    for(int i = 0;i < lottos.size();i++)
    {
        if(lottos[i] == 0)
            zerocnt++;
        
        else
        {
            for(int j=0;j< win_nums.size();j++)
            {
                if(lottos[i] == win_nums[j])
                {
                    equalcnt++;
                }
            }
        }
    }
    
    int max, min;
    
    if(zerocnt+equalcnt<2)
        max=6;
    else
        max = 6-equalcnt-zerocnt+1;
    
    if(equalcnt<2)
        min = 6;
    else
        min = 6-equalcnt+1;
    
    answer = {max,min};
    return answer;
}