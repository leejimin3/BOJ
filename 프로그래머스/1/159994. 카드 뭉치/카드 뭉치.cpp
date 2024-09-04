#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool flag[22] = {false,};

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";

    int cnt1 = 0;
    int cnt2 = 0;
    
    for(int i = 0; i < goal.size(); i++)
    {
        if(cards1[cnt1] == goal[i])
        {
            cnt1++;
            flag[i] = true;
            continue;
        }
        
        if(cards2[cnt2] == goal[i])
        {
            cnt2++;
            flag[i] = true;
            continue;
        }
        
        break;
    }
    
    for(int i = 0; i < goal.size(); i++)
    {
        if(flag[i] == false)
        {
            answer = "No";
        }
    }
    
    return answer;
}