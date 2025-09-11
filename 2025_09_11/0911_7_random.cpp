#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    for (int i = 0; i<100; i++) {
        int score = rand() % 101; // 0~100 사이의 난수 생성
        //cout << score << " is " << ((score >=90) ? "A" : (score >= 80) ? "B" : (score >= 70) ? "C" : (score >= 60) ? "D" : "F") << endl;

        int grade = "F";
        if (score >= 90) grade = "A";
        else if (score >= 80) grade = "B";
        else if (score >= 70) grade = "C";
        else if (score >= 60) grade = "D";
        else grade = "F";

        cout << score << " is " << grade << endl;
    }
    return 0;
}