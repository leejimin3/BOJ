#include <iostream>

using namespace std;

int main(void) {
    int n; cin >> n;
    n % 2 == 1 ? cout << n << " is odd" << "\n" : cout << n << " is even" << "\n"; 
    
    return 0;
}