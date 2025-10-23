#include <iostream>
using namespace std;

struct Pointer {
    float x, y;
};

class Point {
    Pointer p;
    public:

    Point(Pointer v){
        p = v;
    }

    void setPoint(float x, float y){
        p.x = x;
        p.y = y;
    }

    Pointer getPoint(){
        return p;
    }

    void move(float dx, float dy){
        p.x += dx;
        p.y += dy;
    }
};

int main() {
    Point p1({1.0, 2.0});
    Pointer p = p1.getPoint();
    cout << "Point p1: (" << p.x << ", " << p.y << ")" << endl;
    p1.move(0.3, 0.4);
    cout << p1.getPoint().x << ", " << p1.getPoint().y << endl;

    return 0;
}