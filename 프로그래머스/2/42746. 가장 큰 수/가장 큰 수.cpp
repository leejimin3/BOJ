#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(const string& a,const string& b)
{
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> vec;

    for(const auto i : numbers)
    {
        vec.emplace_back(to_string(i));
    }
    
    sort(vec.begin(), vec.end(), Compare);
    
    if(vec[0] == "0") return "0";
    
    for(const auto& i : vec)
    {
        answer += i;
    }
    return answer;
}