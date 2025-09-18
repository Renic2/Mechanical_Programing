#include <iostream>

using namespace std;

int main() {
}

void MIN_MAX(int a, int b, int c, int& min, int& max) {
    min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}