#include <iostream>
using namespace std;
template <typename T>

T add(T a, T b)
{
    return a + b;
}


int main(void) {
    int a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << add(a, b) << endl;
    return 0;
}