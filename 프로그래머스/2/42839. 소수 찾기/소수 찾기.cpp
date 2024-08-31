#include <string>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

set<int> ans;

bool IsPrime(int x)
{
    if(x<= 1) return false;
    
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0) return false;
    }
    
    return true;
}

int solution(string numbers) {
    sort(numbers.begin(), numbers.end());
    do
    {
        string tmp;
        for(int i = 0; i < numbers.size(); ++i)
        {           
            tmp += numbers[i];
            if(IsPrime(stoi(tmp))) 
                ans.insert(stoi(tmp));
        }
    }while(next_permutation(numbers.begin(), numbers.end()));
    
    return ans.size();
}