#include <iostream>
#include <string>
using namespace std;

int main() {
    string word_a, word_b;
    cout << "Type two words: ";
    cin >> word_a >> word_b;
    cout << word_a + "--->" + word_b << endl;
    cout << word_a.length() + word_b.length() << endl; // 두 단어의 글자 수를 더해서 출력한다.
    return 0;
}