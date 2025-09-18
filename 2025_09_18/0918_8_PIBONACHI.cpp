#include <iostream>

using namespace std;

void PIBONACHI(int n, int& fib);

int main() {
    int n, fib;
    cout << "Enter a positive integer: ";
    cin >> n;
    PIBONACHI(n, fib);
    cout << "Fibonacci(" << n << ") = " << fib << endl;
    return 0;
}

void PIBONACHI(int n, int& fib) {
    if (n <= 1) {
        fib = n;
        return;
    }
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) { 
        int temp = a + b;
        a = b;
        b = temp;
    }
    fib = b;
}