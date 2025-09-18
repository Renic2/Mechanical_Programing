#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

int main(){
    while (true) {
        cout << "✩ ✩ ✩ ★"; Sleep(500); cout << "\b\b\b\b\b\b\b\b";
        cout << "✩ ✩ ★ ✩"; Sleep(500); cout << "\b\b\b\b\b\b\b\b";
        cout << "✩ ★ ✩ ✩"; Sleep(500); cout << "\b\b\b\b\b\b\b\b";
        cout << "★ ✩ ✩ ✩"; Sleep(500); cout << "\b\b\b\b\b\b\b\b";
    }
    
    return 0;
}