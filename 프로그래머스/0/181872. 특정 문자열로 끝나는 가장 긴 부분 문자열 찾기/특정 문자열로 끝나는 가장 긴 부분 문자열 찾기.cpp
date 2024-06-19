#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int index; int cnt = 0;

    for(int i = myString.length()-1; i >= 0; i--)
    {
        if(myString[i] == pat[0])
        {
            for(int j = 0; j < pat.size(); j++)
            {
                if(pat[j] == myString[i+j])
                {
                    cnt++;
                    if(cnt == pat.size())
                    {
                        for(int k = 0; k < i+j+1; k++)
                        {
                            answer += myString[k];
                        }
                    }
                }
                else
                {
                    cnt = 0;
                }
            }
        }
    }
    
    
    
    return answer;
}