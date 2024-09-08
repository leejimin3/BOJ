// 기능 1 : 10초전 이동
// 기능 2 : 10초 후 이동
// 기능 3 : 오프닝 건너뛰기
// 길이, 재생위치, 오프닝시작, 오프닝 끝, 사용자 입력이 인자로 들어옴

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int GetTime(string pos)
{
    string mm = "";
    mm+=pos[0];
    mm+=pos[1];
    
    string ss = "";
    ss+=pos[3];
    ss+=pos[4];
    
    int intmm = stoi(mm);
    int intss = stoi(ss);
    
    int sum = intmm*60 + intss;
    
    return sum;
}

string SetTime(int pos)
{
    string strmm;
    string strss;
    
    bool bisunder = false;
    int mm = pos/60;
    int ss = pos%60;
    
    if(mm < 10)
    {
        strmm += "0";
    }
    if(ss < 10)
    {
        strss += "0";
    }
    strmm += to_string(mm);
    strss += to_string(ss);
    
    string strpos = "";
    strpos+=strmm;
    strpos+=":";
    strpos+=strss;
    return strpos;
}

string PrevFunc(string pos)
{
    int intpos = GetTime(pos);
    
    if(intpos < 10)
    {
        intpos = 0;
    }
    else
    {
        intpos -= 10;
    }
    string strpos = SetTime(intpos);
    
    return strpos;
}

string NextFunc(string pos, string video_len)
{
    int intpos = GetTime(pos);
    int intvideo_len = GetTime(video_len);

    if(intvideo_len - intpos < 10)
    {
        intpos = intvideo_len;
    }
    else
    {
        intpos += 10;
    }
    
    string strpos = SetTime(intpos);
    return strpos;
}

string SkipOP(string pos, string op_start, string op_end)
{
    int intpos = GetTime(pos);
    int intop_start = GetTime(op_start);
    int intop_end = GetTime(op_end);
    
    if(intpos >=intop_start && intpos <= intop_end)
    {
        return op_end;    
    }
    
    return pos;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    string answer = "";
    
    pos = SkipOP(pos, op_start, op_end);
    for(int i = 0; i < commands.size(); i++)
    {
        string CurrentCommand = commands[i];
        if(CurrentCommand == "prev")
        {
            pos = PrevFunc(pos);
        }
        else
        {
            pos = NextFunc(pos, video_len);
        }
        pos = SkipOP(pos, op_start, op_end);
    }
    
    answer = pos;
    
    return answer;
}