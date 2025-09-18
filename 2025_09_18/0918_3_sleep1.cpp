#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

int main(){
    while (true) {
        cout << "0";
        Sleep(500);
        cout << '\b';
        cout << ".";
        Sleep(500);
        cout << '\b'; // '' 은 한 글자를 나타냄, ""은 문자열을 나타냄
    }
    
    return 0;
}