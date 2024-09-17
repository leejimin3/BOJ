#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// 인덱스, 카운트
vector<pair<int, double>> vec;

bool cmp(const pair<int, double> a, const pair<int, double> b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    for(int i = 0 ; i < N; i++)
    {
        int round = i+1; 
        
        double x = 0, y = 0;
        
        for(int j = 0; j < stages.size(); j++)
        {
            if(stages[j] >= round)
            {
                y++;
                if(stages[j] == round)
                {
                    x++;
                }
            }

        }
        pair<int, double> p;
        p.first = round;
        
        if(x == 0)
        {
            p.second = 0;
        }
        else if(y == 0)
        {
            p.second = 1;
        }
        else
        {
        p.second = x/y;    
        }
        vec.emplace_back(p);
    }
    
    sort(vec.begin(), vec.end(), cmp);
    
    for(const auto& i : vec)
    {
        answer.emplace_back(i.first);
    }
    
    return answer;
}