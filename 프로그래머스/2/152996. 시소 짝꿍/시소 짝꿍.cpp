#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>

using namespace std;

unordered_map<int, long long> Map;
bool visit[2001];
long long solution(vector<int> weights) {
    long long answer = 0;

    // 개수 카운팅
    for(int i = 0; i < weights.size(); i++)
    {
        Map[weights[i]]++;
    }
    
    for(int i = 0; i < weights.size(); i++)
    {
        if(Map[weights[i]] > 1 && !visit[weights[i]])
        {
            answer += Map[weights[i]] * (Map[weights[i]]-1) / 2;
            visit[weights[i]] = true;
        }
    
        // 1:2
        if(2*weights[i] <= 1000 && Map[2 * weights[i]])
        {
            //cout << weights[i] << " " << 2*weights[i] << "\n";
            answer += Map[2*weights[i]];
        }

        // 3:4
        if(weights[i] % 3 == 0 && weights[i]/3 * 4 <= 1000 && Map[weights[i]/3*4])
        {
            //cout << weights[i] << " " << weights[i]/3*4 << "\n";
            answer += Map[weights[i]/3*4];
        }

        // 2:3
        if(weights[i] % 2 == 0 && weights[i]/2 * 3 <= 1000 && Map[weights[i]/2*3])
        {
            //cout << weights[i] << " " << weights[i]/2*3 << "\n";
            answer += Map[weights[i]/2*3];
        }
    }
    
    return answer;
}