#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int ans = 0;
    if(str2.find(str1) != string::npos) { ans = 1; }
    return ans;
}