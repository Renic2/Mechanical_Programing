#include <iostream>

using namespace std;

void PrintArray(string name, int arr[], int n);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    PrintArray("Arr1", arr1, sizeof(arr1)/sizeof(int));    
    return 0;
}

void PrintArray(string name, int arr[], int n) {
    cout << name << "[] = [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;
}