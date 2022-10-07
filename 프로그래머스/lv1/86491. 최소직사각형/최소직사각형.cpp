#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int temp = 0;
    int W = 0, H = 0;
    for(int i = 0; i< sizes.size(); i++)
    {
        sort(sizes[i].rbegin(), sizes[i].rend());
        if(sizes[i].front() > W)
            W = sizes[i].front();
        if(sizes[i].back() > H)
            H = sizes[i].back();
    }
    answer = W*H;
    return answer;
}