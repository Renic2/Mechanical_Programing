#include <iostream>
#include <cmath>
#define PI (4.0 * atan(1.0))

using namespace std;

int main() {
    float radius;
    cout << "Type the radius of a circle: ";
    cin >> radius;
    cout << "The area of the circle is " << PI * radius * radius << endl;
    // cout << "The area of the circle is " << PI * pow(radius, 2) << endl; // pow() 함수를 이용한 방법도 존재한다.
    cout << pow(2, 12) << endl;
    return 0;
}