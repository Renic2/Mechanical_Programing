#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <Windows.h>

using namespace std;

enum WASYHER {IDLE, LOAD, WASH, LINSE, SPIN, FINISH} mode;
int wait[6] = { 1000,5000,5000,7000,3000,2000 };
 
int main() {
    mode = IDLE;
    int off = 0;
    while (off == 0) {
        switch (mode) {
            case IDLE:
                cout << "WAITING..." << endl; mode = LOAD;
                Sleep(wait[IDLE]); break;

            case LOAD:
                cout << "LOADING LAUNDRY..." << endl; mode = WASH;
                Sleep(wait[LOAD]); break;

            case WASH:
                cout << "WASHING..." << endl; mode = LINSE;
                Sleep(wait[WASH]); break;

            case LINSE:
                cout << "LINSING..." << endl; mode = SPIN;
                Sleep(wait[LINSE]); break;

            case SPIN:
                cout << "SPINNING..." << endl; mode = FINISH;
                Sleep(wait[SPIN]); break;

            case FINISH:
                cout << "FINISHED!" << endl; mode = IDLE;
                Sleep(wait[FINISH]); off = 1; break;
        }
    }
}