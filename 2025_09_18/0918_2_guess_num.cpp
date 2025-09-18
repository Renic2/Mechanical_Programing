#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int ans = rand() % 101, guess = -1;
    int tri = 0;

    while (guess != ans) {
        cout << "try: " << tri << "Guess the number (0-100): ";
        cin >> guess;

        if (guess < ans) {
            cout << "Too small!" << endl;
        } else if (guess > ans) {
            cout << "Too big!" << endl;
        } else {
            cout << "Correct! The number was " << ans << "." << endl;
        }

        tri++;
    }
    
    return 0;
}