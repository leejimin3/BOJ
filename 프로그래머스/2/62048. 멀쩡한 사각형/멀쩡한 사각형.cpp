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
    
    sum = (long long)w*h;
    gcd = GCD(w,h);
    answer = sum - (w + h - gcd); 
    
    return answer;
}