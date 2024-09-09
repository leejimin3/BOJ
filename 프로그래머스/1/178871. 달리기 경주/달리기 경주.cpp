#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<string, int> SIMap;
unordered_map<int, string> ISMap;
vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    
    for(int i = 0; i < players.size(); i++)
    {
        SIMap[players[i]] = i+1;
        ISMap[i+1] = players[i];
    }
    
    for(int i = 0; i < callings.size(); i++)
    {
        // 불린 친구
        string callname = callings[i];
        // 불린 친구 번호
        int callscore = SIMap[callings[i]];
        
        // 역전 당한 친구 번호
        int prevscore = callscore-1;
        // 역전 당한 친구 이름
        string prevname = ISMap[callscore-1];
        
        // 등수 바꾸기
        int tmp = SIMap[callings[i]];
        SIMap[callings[i]] = prevscore;
        SIMap[prevname] = tmp;
        
        // 이름바꾸기
        string tmp2 = ISMap[callscore];
        ISMap[callscore] = prevname;
        ISMap[prevscore] = tmp2;
    }
    
    
    for(int i = 0; i < players.size(); i++)
    {
        answer.emplace_back(ISMap[i+1]);
    }
    
    return answer;
}