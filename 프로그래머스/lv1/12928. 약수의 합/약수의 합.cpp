#include <string>
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int solution(int n) {
    
    vector<int> vec;
    
    for(int i=1; i <= n; i++)
    {
        if(n%i == 0)
            vec.emplace_back(i);
    }
    
    return accumulate(vec.begin(), vec.end(),0);;
}