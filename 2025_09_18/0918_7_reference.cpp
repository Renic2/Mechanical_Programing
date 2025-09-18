#include <iostream>
#define PI 3.14f

using namespace std;

void Circle (float radius, float& area, float& perimeter);

int main() {
    cout << "Circle Area and Perimeter Calculation" << endl;
    float radius, area, perimeter;
    cout << "Enter radius: ";
    cin >> radius;
    Circle(radius, area, perimeter);
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    return 0;
}

void Circle (float radius, float& area, float& perimeter) {
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
}
