#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> str1 = {1,2,3,4,5};
    vector<int> str2 = {2,1,2,3,2,4,2,5};
    vector<int> str3 = {3,3,1,1,2,2,4,4,5,5};
    
    vector<int> x = {0,0,0};
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == str1[i%str1.size()])
            x[0]++;
        if(answers[i] == str2[i%str2.size()])
            x[1]++;
        if(answers[i] == str3[i%str3.size()])
            x[2]++;
    }
    
    int max1 = *max_element(x.begin(),x.end());
    
    for(int i = 0; i < x.size(); i++)
    {
        if(max1 == x[i])
            answer.push_back(i+1);
    }
    
    return answer;
}