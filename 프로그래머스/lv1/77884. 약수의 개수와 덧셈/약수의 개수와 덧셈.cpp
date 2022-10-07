#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int cnt = 0;
    for (int i = left;i< right +1; i++)
    {
        cnt = 0;
        for(int j = 1; j<i+1; j++)
        {
            if(i%j ==0)
                cnt++;
        }
        
        if(cnt%2 ==0)
            answer+= i;
        else
            answer-= i;
        
    }
    return answer;
}