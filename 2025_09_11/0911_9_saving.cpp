#include <iostream>

using namespace std;

int main() {
    int ABC, A, B, C;

    for (ABC = 2; ABC < 1000; ABC++ ) {
        C = ABC % 10;
        B = (ABC / 10) % 10;
        A = (ABC / 100);

        
        if (ABC == A*A*A + B*B*B + C*C*C) {
            cout << ABC << ", ";
        }
    }
    cout << endl;
    return 0;
}