#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    string ex = "";
    sort(phone_book.begin(), phone_book.end());
    
    for(int i = 0; i<phone_book.size()-1; i++)
    {
        ex.append(phone_book[i+1].begin(), phone_book[i+1].begin() + phone_book[i].size());
        if(ex == phone_book[i])
            answer = false;
        ex = "";
    }     
    return answer;
}