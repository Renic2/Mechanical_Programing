#include <iostream>
#include <cmath>

using namespace std;

class Circle {
    public:
    float r;

    Circle(float radius) { r = radius; }

    float area() { return M_PI * r * r;}

    float peri() { return 2 * M_PI * r; }

    void show() {
        cout << "Radius: " << r << ", Area: " << area() << ", Perimeter: " << peri() << endl;
    }
};

class Cylinder : public Circle {
    public:
    float h;

    Cylinder(float radius, float height) : Circle(radius) { // member initializer list
        r = radius; h = height; }

    float volume() { return area() * h; }
    float surface_area() { return 2 * area() + peri() * h; }
    void show() {
        cout << "Radius: " << r << ", Height: " << h << ", Volume: " << volume() << ", Surface Area: " << surface_area() << endl;
    }
};

int main() {
    Circle c(5.0);
    c.show();

    Cylinder cy(5.0, 10.0);
    cy.show();

    return 0;
}