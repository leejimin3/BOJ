#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    
    pair<int, int> par;
    int length = 1000001;
    int start = 0, end = 0;
    int sum = sequence[0];
    
    while(end < sequence.size())
    {
        if(sum == k && length > end - start)
        {
            par.first = start;
            par.second = end;
            length = end - start;
        }
        
        if(sum > k)
        {
            sum -= sequence[start];
            start++;
        }
        else
        {
            end++;
            sum += sequence[end];
        }
        
    }
    

    answer.emplace_back(par.first);
    answer.emplace_back(par.second);
    return answer;
}