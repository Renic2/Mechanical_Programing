#include <iostream>
using namespace std;
int Max(int, int); // 함수 원형 선언 (function prototype declaration)

int main() {
    int a = 10, b = 20;
    cout << "Max(" << a << ", " << b << ") = " << Max(a, b) << endl;
    return 0;
}

int Max(int a, int b) {
    if (a > b) return a;
    else return b;
}

// int Max(int a, int b) {
//     return (a > b) ? a : b; // 삼항 연산자 사용
