#include <iostream>

using namespace std;

int fibonaciilist[51] = {0,1,};

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return fibonaciilist[n];
    }
    else if(fibonaciilist[n] == 0){
        fibonaciilist[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return fibonaciilist[n];
}


int main() {

    int T;
    cin >> T;

    int tmp;

    for (int i = 0; i < T; i++)
    {
        cin >> tmp;
        if(tmp == 0)
            cout << "1 0" << "\n";
        else
        {
            cout << fibonacci(tmp-1) << " " << fibonacci(tmp) << "\n";
        }

    }

}