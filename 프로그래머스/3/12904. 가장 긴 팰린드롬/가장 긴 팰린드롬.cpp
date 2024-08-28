#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Pal(string s, int l, int r)
{
    while(l >= 0 && r < s.length())
    {
        if(s[l] != s[r])
        {
            break;
        }
        
        l--; r++;
    }
    
    return r-l-1;
}

int solution(string s)
{
    int answer = 0;
    
    for(int i =0; i < s.length(); i++)
    {
        int l = i, r = i;
        
        int odd = Pal(s, l, r);
        int even = Pal(s, l-1, r);
        
        int Max = max(odd, even);
        answer = max(Max, answer);
    }

    return answer;
}