#include <iostream>

using namespace std;

int pibo(int x)
{
    if(x == 0){return 0;}
    if (x == 1) { return 1; }

    return pibo(x - 2) + pibo(x - 1);

}


int main(int argc, char* argv[]) {

    int x;
    cin >> x;

    cout << pibo(x);
}