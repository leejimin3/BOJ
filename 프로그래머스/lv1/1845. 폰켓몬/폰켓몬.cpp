#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int cnt = nums.size()/2;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    for(int i = 0 ; i < cnt; i++)
    {
        if(nums.empty() == false)
        {
            answer ++;
            nums.pop_back();
        }
    }
    
    return answer;
}