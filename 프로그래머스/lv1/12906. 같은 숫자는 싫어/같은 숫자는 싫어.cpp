#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for(int i ; i<arr.size(); i++)
    {
        if(answer.empty() == false && answer.back() == arr[i])
            continue;
        
        answer.push_back(arr[i]);
    }
    
    return answer;
}