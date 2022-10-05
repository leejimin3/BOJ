#include <iostream>
#include <string.h>


using namespace std;

int counted;

int cnt_up()
{
    counted++;
    return counted;
}

int recursion(const char* s, int l, int r) {
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else
    {
        cnt_up();
        return recursion(s, l + 1, r - 1);
    }
    
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    
    char str[1001];
    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> str;
        cout << isPalindrome(str) << " ";
        cout << cnt_up() << "\n";
        counted = 0;
    }
}