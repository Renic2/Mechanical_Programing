#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Stick {
    int sticks[4];
    public:

    Stick() {
        sticks[0] = 0;
        sticks[1] = 0;
        sticks[2] = 0;
        sticks[3] = 0; // 0: Front, 1: Back
        // initialize all sticks to front side
    }

    void play(){
        srand(time(0));
        for (int i = 0; i < 4; i++) {
            sticks[i] = rand() % 2; // 0 or 1
        }
    }

    void show(){
        cout << "Sticks: ";
        for (int i = 0; i < 4; i++) {
            cout << (sticks[i] ? "O" : "X");
        }
        cout << endl;
    }

    string eval(){
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += sticks[i];
        }
        if (sum == 0) return "모";
        else if (sum == 1) return "도";
        else if (sum == 2) return "개";
        else if (sum == 3) return "걸";
        else return "윷";
    }
};

int main() {
    Stick game;
    int choice;

    while (1) {
        cout << "1. 윷 돌리기 / 2. 윷 출력(모양) / 3. 윷 출력(결과) / 4. 종료" << endl;
        cin >> choice;
        if (choice == 1) {
            game.play();
            cout << "윷을 돌렸습니다." << endl;
        } else if (choice == 2) {
            game.show();
        } else if (choice == 3) {
            cout << "결과: " << game.eval() << endl;
        } else if (choice == 4) {
            cout << "게임을 종료합니다." << endl;
            break;
        } else {
            cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
        }
    }
}