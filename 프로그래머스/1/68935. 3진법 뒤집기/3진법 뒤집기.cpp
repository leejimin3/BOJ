#include <stack>

using namespace std;

stack<int> stk;

int solution(int n) {
    int answer = 0;
    
    while(n != 0)
    {
        stk.push(n%3);
        n/=3;
    }
    
    int tmp = 1;    //인덱스
    while(!stk.empty())
    {
        answer += tmp * stk.top();
        tmp *=3;
        stk.pop();
    }
    
    return answer;
}