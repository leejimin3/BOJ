#include <iostream>
using namespace std;

long long sum;
long long gcd;

long long GCD(int w, int h)
{
    if(h == 0) return w;
    return GCD(h, w%h);
}

long long solution(int w,int h) {
    long long answer = 0;
    
    long long ans;
    for(int i = 1; i < w; i++)
    {
        ans = ((double)h*i)/w;
        answer+=ans;
    }
    
    return answer*2;
}