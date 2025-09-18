#include <iostream>

using namespace std;

bool isPythagorean(int a, int b, int c) {
    return (a*a + b*b == c*c);
}

bool isPrime(int n) {
    if (n <= 1) return false; // 1 이하의 수는 소수가 아님
    for (int i = 2; i*i <= n; i++) { // i*i <= n 은 i <= sqrt(n) 과 동일
        if (n % i == 0) return false; // 나누어 떨어지면 소수가 아님
    }
    return true; // 위 조건을 모두 통과하면 소수임
}

int main() {
    int A, B, C;

    for (A = 1; A < 1000; A++) {
        if (isPrime(A)) {
            for (B = A; B < 1000; B++ ) { // B는 A보다 크거나 같아야 한다.
                for (C = B; C < 1000; C++ ) { // C는 B보다 크거나 같아야 한다.
                    if (isPythagorean(A, B, C)) {
                        cout << "(" << A << ", " << B << ", " << C << ")" << endl;
                    }
                }
            }
        }
        
    }
    return 0;
}