#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    int i;
    int sum = 1;
    cin >> i;


    for (int k = 1; k <= i; k++)
    {
        sum *= k;
    }

    cout << sum;
}