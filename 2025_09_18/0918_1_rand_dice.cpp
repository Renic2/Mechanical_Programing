#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    string c = "";

    while (c != "s") {
        cin >> c;
        
        if (c == "g") {
            for (int i = 0; i < 4 ; i++) {
                cout << "[" << rand() % 6 + 1 << "]" << endl; 
            }
        }
    }
    
    return 0;
}