#include <string>
#include <vector>
#include <iostream>
using namespace std;

string chihwan(string new_id)
{
    for(int i = 0; i < new_id.size(); i++)
    {
        if(new_id[i] >= 'A' && new_id[i] <= 'Z')
        {
            new_id[i]+=32;
        }
    }
    return new_id;
}

string erase(string rt)
{
    for(int i = 0; i < rt.size(); i++)
    {
            if(!((rt[i] >=97 && rt[i] <= 122) || (rt[i] >=48 && rt[i] <= 57) || rt[i] == '-' || rt[i] == '_' || rt[i] == '.'))
            {
                rt.erase(rt.begin()+i);
                i--;   
            }
            
    }
    return rt;
}

string dot(string rt)
{
    for(int i =0; i<rt.size(); i++)
    {
        if(rt[i] == '.')
        {
            int cnt = 1;
            while(rt[i] == rt[i+cnt])
            {
                cnt++;
            }
            rt.erase(rt.begin()+i+1, rt.begin()+i+cnt);
        }
    }
    return rt;
}

string first(string rt)
{
    if(rt[0] == '.')
        rt.erase(rt.begin());
    if(rt[rt.size()-1] == '.')
            rt.erase(rt.begin()+(rt.size()-1));
    return rt;
}

string null(string rt)
{
    if(rt.empty() == true)
        rt = "a";
    return rt;
}

string over(string rt)
{
    if(rt.size()>=16)
    {
        rt.erase(15);
        if(rt[rt.size()-1] == '.')
            rt.erase(rt.begin()+(rt.size()-1));
    }
    
    return rt;
}

string three(string rt)
{
    while(rt.size() < 3)
    {
        rt.push_back(rt.back());
    }
    
    return rt;
}
string solution(string new_id) {
    string answer = "";
    
    answer = chihwan(new_id);
    answer = erase(answer);
    answer = dot(answer);
    answer = first(answer);
    answer = null(answer);
    answer = over(answer);
    answer = three(answer);
    
    cout << answer;
    return answer;
}