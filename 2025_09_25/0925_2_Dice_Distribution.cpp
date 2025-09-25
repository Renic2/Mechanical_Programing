#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollN(int N);
void rollProb(int dice_num, int N, int freq[]);
void PrintArray(string name, int arr[], int n);
void DrawGraph(int freq[]);

int main() {
    srand(time(0));

    int freq[31] = {0};
    rollProb(5, 10000, freq);

    PrintArray("Freq", freq, 31);
    DrawGraph(freq);
    return 0;
}

int rollN(int N){
    int tot = 0;
    for (int i = 0; i < N; i++) {
        tot += rand() % 6 + 1;
    }
    return tot;
}

void rollProb(int dice_num, int N, int freq[]) {
    for (int i = 0; i < N; i++){
        freq[rollN(dice_num)]++;
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

void DrawGraph(int freq[]) {
    for (int i = 5; i <= 30; i++) {
        cout << i << " ";
        for (int j = 0; j < freq[i]; j += 10) {
            cout << "■";
        }
        cout << " "  << freq[i] / float (100) << endl;
    }
}