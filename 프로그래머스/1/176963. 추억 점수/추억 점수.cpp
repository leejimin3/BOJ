#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i = 0; i < photo.size(); i++)
    {
        int point = 0;
        for(const auto& phototmp : photo[i])
        {
            for(int j = 0; j < name.size(); j++)
            {
                if(phototmp == name[j])
                {
                    point += yearning[j];
                }
            }
        }
        answer.emplace_back(point);
    }
    
    return answer;
}