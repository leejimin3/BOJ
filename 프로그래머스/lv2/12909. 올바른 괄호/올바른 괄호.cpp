#include<string>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int left =0, right = 0;
    
    if(s.front() == ')' || s.back() == '(')
    {
        answer = false;
        return answer;
    }
    
    for(int i =0; i< s.size(); i++)
    {
        if(s[i] == '(')
            left ++;
        if(s[i] == ')')
            right ++;
        
        if(right > left)
        {
            answer = false;
            return answer;
        }
    }
    
    if(left != right)
        answer = false;

    return answer;
}