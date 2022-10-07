#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    vector<string>::iterator iter = participant.begin();
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int i = 0; i < participant.size(); i++)
    {
        if(participant[i] != completion[i])
        {
            answer = participant[i];
            iter += (i-1);
            participant.erase(iter);
        }
    }
    
    return answer;
}