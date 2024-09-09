// 1~n까지의 번호를 가진 기사가 무기 구매
// 자신의 번호의 약수 개수의 공격력을 가진 무기 구해
// 공격력 제한수치 잇음. 만약 넘으면 협약기관에서 정한 공격력(최대인듯?)
// 1공격력당 1kg 철의 무게 계산

#include <string>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

vector<int> vec;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1; i <= number; i++)
    {
        int sum = 0;
        for(int j = 1; j <= sqrt(i); j++)
        {
            if(i%j == 0)
            {
                sum++;
                if(j != i/j) sum++;    
            }          
        }
        vec.emplace_back(sum);
    }
    
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] > limit)
        {
            answer += power;
        }
        else
        {
            answer += vec[i];
        }
    }
    
    return answer;
}