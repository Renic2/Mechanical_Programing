#include <iostream>
using namespace std;

int FactorialRecursive(int); // 함수 원형 선언 (function prototype declaration)
int FactorialIterative(int); // 함수 원형 선언 (function prototype declaration)

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << num << "! = " << FactorialRecursive(num) << " (Recursive)" << endl;
    cout << num << "! = " << FactorialIterative(num) << " (Iterative)" << endl;
    return 0;
}

// recursive function to calculate factorial
int FactorialRecursive(int n) {
    if (n <= 1) return 1;
    else return n * FactorialRecursive(n - 1);}

// without recursion > iterative approach
int FactorialIterative(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}