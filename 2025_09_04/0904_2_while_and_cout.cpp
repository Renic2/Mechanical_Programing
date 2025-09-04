#include <iostream> 
using namespace std;
// 기본적으로 호출하는 헤더 파일과 네임스페이스를 지정한다.

void main(){ 
    int a = 0;

    while (a < 101) { 
        // while이란? 조건에 맞는 경우에는 계속하여 실행시키는 함수이다. 즉, a가 101보다 작은 경우 while문을 반복하여 실행한다.
        cout << a << endl; 
        a++; // a++은 a = a + 1과 동일
        // 주의!! = 는 대입연산자이다, 동일하다의 의미가 아닌 = 기준 오른쪽의 값을 왼쪽에 대입시키는 것을 말한다.
    }
}