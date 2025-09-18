#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 1 이하의 수는 소수가 아님
    for (int i = 2; i*i <= n; i++) { // i*i <= n 은 i <= sqrt(n) 과 동일
        if (n % i == 0) return false; // 나누어 떨어지면 소수가 아님
    }
    return true; // 위 조건을 모두 통과하면 소수임
}

int main() {
    for (int num = 2; num < 100; num++) {
        if (isPrime(num)) {
            cout << num << ", ";
        }
    }
    return 0;
}