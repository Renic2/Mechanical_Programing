#include <iostream>
using namespace std;

// 변수의 자료형은 int (정수형), float(실수형), string(문자열형) 등이 있다.
// 변수명 지정시 특수문자는 '_' 만 가능하고 첫 글자에 숫자가 올 수 없다. 그리고 대소문자를 구별한다.
// C++의 키워드는 사용할 수 없다.

void main(){
    cout << "int size = " << sizeof(int) << endl;
    cout << "float size = " << sizeof(float) << endl;
    cout << "double size = " << sizeof(double) << endl;
    cout << "char size = " << sizeof(char) << endl;
    cout << "bool size = " << sizeof(bool) << endl;
    // sizeof()는 자료형의 크기를 바이트 단위로 알려준다.
}