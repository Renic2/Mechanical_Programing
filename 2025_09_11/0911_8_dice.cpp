#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    for (int i = 0; i<10; i++) {
        int num = (rand() % 6) + 1; // 0~100 사이의 난수 생성
        cout << "주사위 눈: " << num << endl;
    }

    return 0;
}