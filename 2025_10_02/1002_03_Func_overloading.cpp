#include <iostream>

using namespace std;

class Printer {
    public:

    void print(int i) {
        cout << "(int): " << i << endl;
    }

    void print(double f) {
        cout << "(float): " << f << endl;
    }

    void print(string s) {
        cout << "(string): " << s << endl;
    }
};

int main() {
    Printer p;

    p.print(5);          // Calls print(int)
    p.print(3.14);      // Calls print(double)
    p.print("Hello");   // Calls print(string)

    return 0;
}