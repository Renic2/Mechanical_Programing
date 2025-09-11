#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Type Integer: ";
    cin >> n;
    
    string s = (n % 2 == 0) ? "Even" : "Odd";
    cout << n << "is" << s << endl;
    return 0;
}