#include <iostream>
using namespace std;
// 기본적으로 호출하는 헤더 파일과 네임스페이스를 지정한다.
// namespace란? 이름공간을 뜻한다. 즉, std라는 이름공간 안에 있는 cout, endl 등을 사용하겠다는 의미이다.
// #xxxx 형식이란 전처리기라 한다. 컴파일러가 코드를 컴파일하기 전에 미리 처리하는 명령어이다.

void main(){ // 출력값이 존재하지 않고 입력도 없는 main 함수.
    int a = 100, b = 55;
    cout << "Hello world" << endl;
    cout << "a + b = " << a + b << endl;
    // cout은 변수/상수를 좌에서 우의 순서로 콘솔로 출력한다.
    // endl은 end line의 약자로 줄바꿈을 의미한다. \n으로 대용이 가능하다.
    // example) cout << a << "\n";
    
    // Hello world
    // a + b = 155
    // 위의 두 줄이 출력되면 프로그램이 정상적으로 작동하는 것이다.
}