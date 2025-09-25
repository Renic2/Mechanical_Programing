#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

struct Vector {
    float x;
    float y;
    // float z;
    // 3D vector can be added later
};

void Vectorprint(Vector v);
Vector add(Vector v1, Vector v2);
Vector sub(Vector v1, Vector v2);
float mag(Vector v);
int inner(Vector v1, Vector v2);

int main() {
    Vector v1 = {3.0, 4.0};
    Vector v2 = {1.0, 2.0};

    cout << "v1 = "; Vectorprint(v1);
    cout << "v2 = "; Vectorprint(v2);
    cout << "v1 + v2 = "; Vectorprint(add(v1, v2));
    cout << "v1 - v2 = "; Vectorprint(sub(v1, v2));
    cout << "|v1| = " << mag(v1) << endl;
    cout << "|v2| = " << mag(v2) << endl;

    cout << "v1 . v2 = " << inner(v1, v2) << endl;

    return 0;
}

void Vectorprint(Vector v) {
    cout << "<" << v.x << ", " << v.y << ">" << endl;
}

Vector add(Vector v1, Vector v2) {
    Vector v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}

Vector sub(Vector v1, Vector v2) {
    Vector v;
    v.x = v1.x - v2.x;
    v.y = v1.y - v2.y;
    return v;
}

float mag(Vector v) { return sqrt(v.x * v.x + v.y * v.y); }

int inner(Vector v1, Vector v2) { return v1.x * v2.x + v1.y * v2.y;}