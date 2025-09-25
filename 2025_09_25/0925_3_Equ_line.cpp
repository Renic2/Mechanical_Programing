#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Point {
    float x;
    float y;
};

struct Param {
    float a;
    float b;
    float c;
};

Param CulLine(Point p1, Point p2);

int main() {
    Point p1 = {1.0, 2.0};
    Point p2 = {3.0, 4.0};

    Param line = CulLine(p1, p2);
    cout << "Line equation: " ;
    for (int i = 0; i < 3; i++) {
        if (i == 0) cout << line.a << "x ";
        else if (i == 1) cout << (line.b >= 0 ? "+ " : "- ") << abs(line.b) << "y ";
        else cout << (line.c >= 0 ? "+ " : "- ") << abs(line.c) << " = 0";
    }

    return 0;
}

Param CulLine(Point p1, Point p2) {
    Param param;
    param.a = p2.y - p1.y;
    param.b = p1.x - p2.x;
    param.c = p2.x * p1.y - p1.x * p2.y;
    return param;
}