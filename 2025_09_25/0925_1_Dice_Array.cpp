#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();
void rolls(int a[], int n);
void PrintArray(string name, int arr[], int n);

int main() {
    srand(time(0));
    int Q[20] = {0};
    rolls(Q, 20);
    PrintArray("Q", Q, 20);

    return 0;
}

int rollDice() {return rand() % 6 + 1;}

void rolls(int a[], int n){
    for (int i = 0; i < n; i++) {
        a[i] = rollDice();
    }
}

void PrintArray(string name, int arr[], int n) {
    cout << name << "[] = [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;
}