#include <iostream>
#include <string>

using namespace std;

class String {
    string s;
    public:

    String(string str) {
        s = str;
    }

    void input(){
        string v;
        cout << "Input string: ";
        cin >> v;
        s += ("/" + v);
    }

    void output() {
        cout << "String: " << s << endl;
    }
};

int main() {
    String str("a");
    str.input();
    str.input();
    str.output();

    return 0;
}