#include <string>
#include <vector>
using namespace std;

template <typename T>
int func(T num_list)
{
    int sum = 0; int mul = 1;
    for(auto i : num_list)
    {
        sum += i; mul *= i;
    }
    
    if(sum*sum > mul)
        return 1;
    else 
        return 0;
}


int solution(vector<int> num_list) {
    int answer = 0;
    answer = func(num_list);
    return answer;
}