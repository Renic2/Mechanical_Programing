#include <iostream>
using namespace std;

int main() {
    int total_sec;
    cout << "Type the number of seconds: ";
    cin >> total_sec;

    int hours = total_sec / 3600;
    int minutes = (total_sec % 3600) / 60;
    // 수업에서는 minutes = (total_sec / 60) % 60; 로 했지만, 위와 같이 해도 동일하다.
    int seconds = total_sec % 60;

    /* int  sec = (total_sec / (int)pow(60, 0)) % 60, 
            min = (total_sec / (int)pow(60, 1)) % 60, 
            hour = (total_sec / (int)pow(60, 2)) % 60;*/

    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
    return 0;
}