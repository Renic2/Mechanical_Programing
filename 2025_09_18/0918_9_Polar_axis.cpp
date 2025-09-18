#include <iostream>
#include <cmath>

using namespace std;

void Polar_axis(int x, int y, float& r, float& theta);

int main() {
    int x, y;
    float r, theta;
    cout << "Enter Cartesian coordinates (x y): ";
    cin >> x >> y;

    Polar_axis(x, y, r, theta);
    cout << "Polar coordinates: r = " << r << ", theta = " << theta << " degrees" << endl;
    
    return 0;
}

void Polar_axis(int x, int y, float& r, float& theta) {
    r = sqrt (x * x + y * y);
    theta = atan2(y, x) * 180 / M_PI; // Convert radians to degrees
}