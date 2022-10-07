#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    bool flag;

    
    for(int i =0; i<numbers.size()-1; i++)
    {
     
        for(int j = i+1 ; j<numbers.size(); j++)
        {
            if(answer.empty() == true)
                answer.push_back(numbers[i]+numbers[j]);
            else
            {
                flag = false;
                for(int k =0; k < answer.size(); k++)
                {
                    if(numbers[i]+numbers[j] == answer[k])
                    {
                        flag = true;
                    }
                }
                
                if(flag == true)
                    continue;
                else
                    answer.push_back(numbers[i]+numbers[j]);
            }
                
        }
                
    }
    sort(answer.begin(), answer.end());
    return answer;
}